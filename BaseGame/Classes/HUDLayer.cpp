//
//  MainSceneLayer.cpp
//  BaseGame
//
//  Created by Ramon Boza on 28/04/2017.
//
//

#include "HUDLayer.h"
#include "Definitions.h"

cocos2d::Scene* HUDLayer::createScene() {
    
    auto scene = cocos2d::Scene::create();
    
    auto layer = HUDLayer::create();
    
    scene->addChild(layer);
    
    return scene;
}


bool HUDLayer::init()
{
    
    if ( !Node::init() )
    {
        return false;
    }

    cocos2d::Size visibleSize = cocos2d::Director::getInstance()->getVisibleSize();
    cocos2d::Vec2 origin = cocos2d::Director::getInstance()->getVisibleOrigin();
    
    int paddingX = 20;
    int paddingY = 20;
    
    auto labelNode = Node::create();
    
    auto player1 = cocos2d::Label::createWithTTF("Player 1", FONT, 32);
    auto player2 = cocos2d::Label::createWithTTF("Player 2", FONT, 32);
    
    auto player1Score = cocos2d::Label::createWithTTF("00000", FONT, 32);
    auto player2Score = cocos2d::Label::createWithTTF("00000", FONT, 32);
    
    labelNode->addChild(player1, -2);
    labelNode->addChild(player1Score, -1);
    labelNode->addChild(player2, 1);
    labelNode->addChild(player2Score, 2);
    
    int playerX = visibleSize.width - player1->getContentSize().width - player1Score->getContentSize().width - paddingX;
    int scoreX = visibleSize.width - player1Score->getContentSize().width / 2 - paddingX;
    int baseHeight = visibleSize.height - player1Score->getContentSize().height / 2;
    
    player1->setPosition(cocos2d::Vec2(playerX,baseHeight - paddingY));
    player1Score->setPosition(cocos2d::Vec2(scoreX,baseHeight - paddingY));
    
    player2->setPosition(cocos2d::Vec2(playerX,baseHeight - paddingY * 3));
    player2Score->setPosition(cocos2d::Vec2(scoreX, baseHeight - paddingY * 3));
    
    this->addChild(labelNode, 0);
    this->scheduleUpdate();
    
    return true;
}
