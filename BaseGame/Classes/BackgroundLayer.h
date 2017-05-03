//
//  MainSceneLayer.hpp
//  BaseGame
//
//  Created by Ramon Boza on 28/04/2017.
//
//

#ifndef BackgroundLayer_hpp
#define BackgroundLayer_hpp

class BackgroundLayer : public cocos2d::Node
{
public:
    
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    CREATE_FUNC(BackgroundLayer);
};

#endif /* BackgroundLayer_hpp */
