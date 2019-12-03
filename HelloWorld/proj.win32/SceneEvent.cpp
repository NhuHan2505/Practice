#include "SceneEvent.h"


USING_NS_CC;

cocos2d::Scene * SceneEvent::createScene()
{
	return SceneEvent::createScene();
}

bool SceneEvent::init()
{
	if (!Scene::init())
	{
		return false;
	}

	auto visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();
	auto sprite = Sprite::create("background.png");
	sprite->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));
	this->addChild(sprite, 0);
	return true;
}
