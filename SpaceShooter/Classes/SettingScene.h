#pragma once
#include "cocos2d.h"
#include "ui\CocosGUI.h"
using namespace cocos2d;
class SettingScene : public Scene
{
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	// a selector callback
	void menuCloseCallback(cocos2d::Ref* pSender);
	void onClickItemSound(cocos2d::Ref* pSender);
	void onClickItemAbout(cocos2d::Ref* pSender);
	// implement the "static create()" method manually
	CREATE_FUNC(SettingScene);
};

