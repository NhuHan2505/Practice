#pragma once
#include "cocos2d.h"
#include "ui\CocosGUI.h"
using namespace cocos2d;


class SceneEvent : public cocos2d::Scene
{
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	void onKeyPress(EventKeyboard::KeyCode keyCode, Event* event);
	void onKeyRelease(EventKeyboard::KeyCode keyCode, Event* event);
	CREATE_FUNC(SceneEvent);
};

