#include "SplashScene.h"
#include "MainScene.h"
#include "Definitions.h"

USING_NS_CC;

bool SplashSceneLayer::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Node::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    this->scheduleOnce(schedule_selector(SplashSceneLayer::GoToMainMenuScene), DISPLAY_TIME_SPLASH_SCENE);
    
    auto backgroundSprite = Sprite::create("Splash Screen.png");
    backgroundSprite->setPosition(Point(visibleSize.width / 2, visibleSize.height / 2 + origin.y));
    
    this->addChild(backgroundSprite);
    
    return true;
}

void SplashSceneLayer::GoToMainMenuScene(float dt) {
    
    auto scene = MainScene::createScene();
    Director::getInstance()->replaceScene(TransitionFade::create(TRANSITION_TIME, scene));
}
