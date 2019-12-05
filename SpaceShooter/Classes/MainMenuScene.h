#pragma once
#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "GamePlayScene.h"
#include "SettingScene.h"
using namespace cocos2d;
class MainMenuScene: public Scene
{
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	void menuCloseCallback(cocos2d::Ref* pSender);
	void menuPlayCallback(cocos2d::Ref* pSender);
	void menuSettingCallback(cocos2d::Ref* pSender);

	CREATE_FUNC(MainMenuScene);
};

