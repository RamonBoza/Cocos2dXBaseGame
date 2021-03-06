//
//  MainSceneLayer.hpp
//  BaseGame
//
//  Created by Ramon Boza on 28/04/2017.
//
//

#ifndef AnimationLayer_hpp
#define AnimationLayer_hpp

class AnimationLayer : public cocos2d::Node
{
public:
    
    static cocos2d::Scene* createScene();
    
    virtual bool init();

    CREATE_FUNC(AnimationLayer);
};

#endif /* AnimationLayer_hpp */
