#include "MainMenuScene.h"
USING_NS_CC;


cocos2d::Scene * MainMenuScene::createScene()
{
	return MainMenuScene::createScene();
}

bool MainMenuScene::init()
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

	auto logo = Sprite::create("./Sprites/Logo/logo.png");
	logo->setAnchorPoint(Vec2(0, 0));
	logo->setPosition(Vec2(50, 450));
	addChild(logo);

	auto itemPlay = MenuItemImage::create("./Buttons/play_normal.png","./Buttons/play_pressed.png", CC_CALLBACK_1(MainMenuScene::menuPlayCallback, this));
	auto itemSetting = MenuItemImage::create("./Buttons/setting_normal.png","./Buttons/setting_pressed.png", CC_CALLBACK_1(MainMenuScene::menuSettingCallback, this));
	auto itemExit = MenuItemFont::create("Exit", CC_CALLBACK_1(MainMenuScene::menuCloseCallback, this));

	itemPlay->setPosition(Vec2(10, 200));
	itemSetting->setPosition(Vec2(10, 150));
	itemExit->setPosition(Vec2(10, 100));

	Vector<MenuItem*> menuItems;
	menuItems.pushBack(itemPlay);
	menuItems.pushBack(itemSetting);
	menuItems.pushBack(itemExit);
	auto menu = Menu::createWithArray(menuItems);
	menu->setPosition(Vec2(240, 100));
	addChild(menu);

	return true;
}

void MainMenuScene::menuCloseCallback(cocos2d::Ref * pSender)
{
	Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
	exit(0);
#endif
}

void MainMenuScene::menuPlayCallback(cocos2d::Ref * pSender)
{
	auto playevent = GamePlayScene::createScene();
	Director::getInstance()->replaceScene(playevent);
}

void MainMenuScene::menuSettingCallback(cocos2d::Ref * pSender)
{
	auto settingevent = SettingScene::createScene();
	Director::getInstance()->replaceScene(settingevent);
}
