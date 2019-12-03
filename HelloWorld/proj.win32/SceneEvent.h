#pragma once
#include "cocos2d.h"
class SceneEvent: public cocos2d::Scene 
{
public:
	static cocos2d::Scene* createScene();
	bool init();
	CREATE_FUNC(SceneEvent);
};

