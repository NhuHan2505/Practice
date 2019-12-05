#include "GamePlayScene.h"
USING_NS_CC;


Sprite* ship;
cocos2d::Scene * GamePlayScene::createScene()
{
	return GamePlayScene::createScene();
}

bool GamePlayScene::init()
{
	if (!Scene::init())
	{
		return false;
	}

	auto visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();
	auto sprite = Sprite::create(".\Sprite\background.png");
	sprite->setAnchorPoint(Vec2(0, 0));
	sprite->setPosition(Vec2(0, 0));
	this->addChild(sprite);
	return true;
}

bool GamePlayScene::onTouchBegan(Touch * touch, Event * event)
{
	Vec2 touchLocation = touch->getLocation();// toa do cham tren man hinh

	auto moveTo = MoveTo::create(0.1f, Vec2(touchLocation.x, touchLocation.y));
	ship->runAction(moveTo);
	return true;
}

bool GamePlayScene::onTouchEnded(Touch * touch, Event * event)
{
	ship->setPosition(260, 50);
	return true;
}

bool GamePlayScene::onTouchMoved(Touch * touch, Event * event)
{
	Vec2 touchLocation = touch->getLocation();
	ship->setPosition(touchLocation);
	return true;
}
