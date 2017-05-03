#include "MainScene.h"
#include "BackgroundLayer.h"
#include "Animationlayer.h"
#include "HUDLayer.h"

USING_NS_CC;

Scene* MainScene::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    auto background = BackgroundLayer::createScene();
    scene->addChild(background);
    
    auto animation = AnimationLayer::create();
    scene->addChild(animation,1);
    
    auto hud = HUDLayer::create();
    scene->addChild(hud,2);
    
    return scene;
}


