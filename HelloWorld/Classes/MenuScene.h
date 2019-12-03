#pragma once
#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__
#include "cocos2d.h"
USING_NS_CC;
class MenuScene: public Scene
{
public:
	static Scene* createScene();
	virtual bool init();
	void update(float deltaTime);
	CREATE_FUNC(MenuScene);
};
#endif // __HELLOWORLD_SCENE_H__

