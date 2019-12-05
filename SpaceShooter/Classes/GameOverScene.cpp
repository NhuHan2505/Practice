#include "GameOverScene.h"
USING_NS_CC;



cocos2d::Scene * GameOverScene::createScene()
{
	return GameOverScene::createScene();
}

bool GameOverScene::init()
{
	if (!Scene::init())
	{
		return false;
	}
	auto visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();

	auto sprite = Sprite::create("./Sprites/background.png");
	sprite->setAnchorPoint(Vec2(0, 0));
	sprite->setPosition(Vec2(0, 0));
	this->addChild(sprite);

	auto itemResume = MenuItemImage::create("./Buttons/resume_normal.png", "./Buttons/resume_pressed.png", CC_CALLBACK_1(GameOverScene::menuResumeCallBack, this));
	auto itemHome = MenuItemImage::create("./Buttons/home_normal.png", "./Buttons/home_pressed.png", CC_CALLBACK_1(GameOverScene::menuHomeCallBack, this));
	itemResume->setPosition(Vec2(50,150));
	itemHome->setPosition(Vec2(200, 150));
	Vector <MenuItem*> menuItem;
	menuItem.pushBack(itemResume);
	menuItem.pushBack(itemHome);
	
	return true;
}

void GameOverScene::menuResumeCallBack(cocos2d::Ref * pSender)
{
	auto play = GamePlayScene::createScene();
	Director::getInstance()->replaceScene(play);
}

void GameOverScene::menuHomeCallBack(cocos2d::Ref * pSender)
{
	auto menu = MainMenuScene::createScene();
	Director::getInstance()->replaceScene(menu);
}
