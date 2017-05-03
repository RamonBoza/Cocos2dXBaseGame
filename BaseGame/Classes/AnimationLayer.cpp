//
//  MainSceneLayer.cpp
//  BaseGame
//
//  Created by Ramon Boza on 28/04/2017.
//
//

#include "AnimationLayer.h"

cocos2d::Scene* AnimationLayer::createScene() {
    
    auto scene = cocos2d::Scene::create();
    
    auto layer = AnimationLayer::create();
    
    scene->addChild(layer);
    
    return scene;
}


bool AnimationLayer::init()
{
    
    if ( !Node::init() )
    {
        return false;
    }
    
    auto background = cocos2d::Sprite::create("HelloWorld.png");
    background->setAnchorPoint(cocos2d::Vec2(0, 0));
    background->setPosition(100,100);
    
    this->addChild(background);
    
    this->scheduleUpdate();
    
    return true;
}
