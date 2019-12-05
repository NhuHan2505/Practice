#pragma once
#include "cocos2d.h"
#include "ui\CocosGUI.h"
#include "GamePlayScene.h"
#include "MainMenuScene.h"
using namespace cocos2d;
class GameOverScene : public Scene
{
public:
	static cocos2d::Scene* createScene();
	virtual bool init();

	void menuResumeCallBack(cocos2d::Ref* pSender);
	void menuHomeCallBack(cocos2d::Ref* pSender);
	CREATE_FUNC(GameOverScene);
};

