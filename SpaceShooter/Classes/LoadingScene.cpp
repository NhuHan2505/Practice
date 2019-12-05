#include "LoadingScene.h"
#include "SimpleAudioEngine.h"
USING_NS_CC;

cocos2d::Scene * LoadingScene::createScene()
{
	return LoadingScene::createScene();
}

static void problemLoading(const char* filename)
{
	printf("Error while loading: %s\n", filename);
	printf("Depending on how you compiled you might have to add 'Resources/' in front of filenames in HelloWorldScene.cpp\n");
}

bool LoadingScene::Init()
{
	if (!Scene::init())
	{
		return false;
	}

	auto visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();
	auto sprite = Sprite::create("./Sprites/background.png");
	if (sprite == nullptr)
	{
		problemLoading("'background.png'");
	}
	else
	{
		// position the sprite on the center of the screen
		sprite->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));

		// add the sprite as a child to this layer
		this->addChild(sprite, 0);
	}
	auto loadingBarGB = Sprite::create("./Loading/loadingbar_bg.png");
	loadingBarGB->setPosition(Vec2(200, 250));
	addChild(loadingBarGB);

	static auto loadingbar = ui::LoadingBar::create("./Loading/loadingbar.png");
	loadingbar->setPosition(loadingBarGB->getPosition());
	loadingbar->setPercent(0);
	loadingbar->setDirection(ui::LoadingBar::Direction::LEFT);
	addChild(loadingbar);

	auto updateLoadingBar = CallFunc::create([]() {
		if (loadingbar->getPercent() < 100)
		{
			loadingbar->setPercent(loadingbar->getPercent() + 1);
		}
	});

	auto sequenceRunUpdateLoadingBar = Sequence::createWithTwoActions(updateLoadingBar, DelayTime::create(0.1f));
	auto repeat = Repeat::create(sequenceRunUpdateLoadingBar, 100);
	loadingbar->runAction(repeat);

	return true;
}

void LoadingScene::Update()
{
}
