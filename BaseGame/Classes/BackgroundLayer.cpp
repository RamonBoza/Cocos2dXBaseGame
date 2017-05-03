//
//  MainSceneLayer.cpp
//  BaseGame
//
//  Created by Ramon Boza on 28/04/2017.
//
//

#include "BackgroundLayer.h"


cocos2d::Scene* BackgroundLayer::createScene() {
    
    auto scene = cocos2d::Scene::create();
    
    auto layer = BackgroundLayer::create();
    
    scene->addChild(layer);
    
    return scene;
}


bool BackgroundLayer::init()
{
    
    if ( !Node::init() )
    {
        return false;
    }
    
    auto background = cocos2d::Sprite::create("Background.png");
    background->setAnchorPoint(cocos2d::Vec2(0, 0));
    background->setPosition(0,0);
    
    this->addChild(background);
    
    this->scheduleUpdate();
    
    return true;
}
