//
//  MainSceneLayer.hpp
//  BaseGame
//
//  Created by Ramon Boza on 28/04/2017.
//
//

#ifndef HUDLayer_hpp
#define HUDLayer_hpp

class HUDLayer : public cocos2d::Node
{
public:
    
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    CREATE_FUNC(HUDLayer);
};

#endif /* HUDLayer_hpp */
