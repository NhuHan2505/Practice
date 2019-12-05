#pragma once
#ifndef __LOADINGSCENE_SCENE_H__
#define __LOADINGSCENE_SCENE_H__
#include "cocos2d.h"
#include "ui\CocosGUI.h"
USING_NS_CC;
class LoadingScene: public Scene
{
public:
	static cocos2d::Scene* createScene();
	virtual bool Init();
	void Update();
	CREATE_FUNC(LoadingScene);
};
#endif // __LOADINGSCENE_SCENE_H__
