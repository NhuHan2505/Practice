#include "MenuScene.h"



Scene * MenuScene::createScene()
{
	return MenuScene::create();
}

bool MenuScene::init()
{
	if (!Scene::init())
	{
		return false;
	}
	scheduleUpdate();
	return true;
}

void MenuScene::update(float deltaTime)
{
}
