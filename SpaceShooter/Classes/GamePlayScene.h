#pragma once
#include "cocos2d.h"
#include "ui\CocosGUI.h"
using namespace cocos2d;
class GamePlayScene : public Scene
{
public:
	static cocos2d::Scene* createScene();

	virtual bool init();
	CREATE_FUNC(GamePlayScene);
};

