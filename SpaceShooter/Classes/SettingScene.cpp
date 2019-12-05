#include "SettingScene.h"
USING_NS_CC;

cocos2d::Scene * SettingScene::createScene()
{
	return SettingScene::createScene();
}

bool SettingScene::init()
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
	addChild(sprite);

	auto logo = Sprite::create("./Sprites/Logo/logo.png");
	logo->setAnchorPoint(Vec2(0, 0));
	logo->setPosition(Vec2(50, 550));
	addChild(logo);

	auto itemSound = MenuItemFont::create("Sound", CC_CALLBACK_1(SettingScene::onClickItemSound, this));
	auto itemAbout = MenuItemFont::create("About", CC_CALLBACK_1(SettingScene::onClickItemAbout, this));
	auto itemBack = MenuItemImage::create("./Buttons/resume_normal.png", "./Buttons/resume_pressed.png", CC_CALLBACK_1(SettingScene::menuCloseCallback, this));
	itemSound->setPosition(Vec2(10, 200));
	itemAbout->setPosition(Vec2(10, 100));
	//itemBack->setAnchorPoint(Vec2(1,1));
	//itemBack->setPosition(Vec2(10 , 150));
	// Create Menu from array of menuItem
	Vector<MenuItem*> menuItems;
	menuItems.pushBack(itemSound);
	menuItems.pushBack(itemAbout);
	//menuItems.pushBack(itemBack);
	auto menu = Menu::createWithArray(menuItems);
	menu->setAnchorPoint(Vec2(0, 0));
	menu->setPosition(Vec2(100, 100));
	addChild(menu);

	return true;
}

void SettingScene::menuCloseCallback(cocos2d::Ref * pSender)
{
	Director::getInstance()->end();
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
	exit(0);
#endif
}

void SettingScene::onClickItemSound(cocos2d::Ref * pSender)
{
	static auto slider = ui::Slider::create();
	slider->loadBarTexture("./Sprites/slider_bar_bg.png");
	slider->loadSlidBallTextures("./Sprites/slider_ball_normal.png", "./Sprites/slider_ball_pressed.png", "./Sprites/slider_ball_disable.png");
	slider->loadProgressBarTexture("./Sprites/slider_bar_pressed.png");
	slider->setPercent(10);
	slider->setPosition(Vec2(200, 250));
	slider->addClickEventListener([](Ref* event)
	{
		log("Slider: %d", slider->getPercent());
	});
	addChild(slider);

	auto visibleSize1 = Director::getInstance()->getVisibleSize();
	auto checkbox = ui::CheckBox::create("./Sprites/checkbox_normal.png",
		"./Sprites/checkbox_pressed.png",
		"./Sprites/checkbox_checked.png",
		"./Sprites/checkbox_normal_disable.png",
		"./Sprites/checkbox_checked_disable.png");

	checkbox->setPosition(Vec2(350, 250));
	checkbox->addTouchEventListener([&](Ref* sender, ui::Widget::TouchEventType type)
	{
		switch (type)
		{
		case ui::Widget::TouchEventType::BEGAN:
			break;
		case ui::Widget::TouchEventType::ENDED:
			log("checkbox 1 clicked");
			break;
		default:
			break;
		}
	});

	this->addChild(checkbox);
}

void SettingScene::onClickItemAbout(cocos2d::Ref * pSender)
{
	auto label = Label::createWithSystemFont("Game Fight Fly ", "Arial", 20);
	label->setPosition(Vec2(100, 50));
	addChild(label);
}
