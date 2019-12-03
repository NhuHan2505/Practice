#include "SceneEvent.h"
#include "SimpleAudioEngine.h"

USING_NS_CC;

Scene * SceneEvent::createScene()
{
	return SceneEvent::createScene();
}

static void problemLoading(const char* filename)
{
	printf("Error while loading: %s\n", filename);
	printf("Depending on how you compiled you might have to add 'Resources/' in front of filenames in SceneEvent.cpp\n");
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
	auto space = Sprite::create("spaceship.png");
	space->setPosition(visibleSize.width / 2, 50);
	this->addChild(space, 1);

	//Animation
	Vector<SpriteFrame*> animFrames;
	animFrames.pushBack(SpriteFrame::create("1.png", Rect(0, 0, 150, 150)));
	animFrames.pushBack(SpriteFrame::create("2.png", Rect(0, 0, 150, 150)));
	animFrames.pushBack(SpriteFrame::create("3.png", Rect(0, 0, 150, 150)));
	animFrames.pushBack(SpriteFrame::create("4.png", Rect(0, 0, 150, 150)));
	animFrames.pushBack(SpriteFrame::create("5.png", Rect(0, 0, 150, 150)));
	animFrames.pushBack(SpriteFrame::create("6.png", Rect(0, 0, 150, 150)));
	animFrames.pushBack(SpriteFrame::create("7.png", Rect(0, 0, 150, 150)));
	animFrames.pushBack(SpriteFrame::create("8.png", Rect(0, 0, 150, 150)));

	auto animation = Animation::createWithSpriteFrames(animFrames, 0.1f);
	auto animate = Animate::create(animation);
	space->runAction(RepeatForever::create(animate));


	auto listener = EventListenerKeyboard::create();
	listener->onKeyPressed = CC_CALLBACK_2(SceneEvent::onKeyPress, this);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
	return true;
}

void SceneEvent::onKeyPress(EventKeyboard::KeyCode keyCode, Event* event)
{
	Vec2 loc = event->getCurrentTarget()->getPosition();
	switch (keyCode) {
	case EventKeyboard::KeyCode::KEY_LEFT_ARROW:
	case EventKeyboard::KeyCode::KEY_A:
		event->getCurrentTarget()->setPosition(--loc.x, loc.y);
		break;
	case EventKeyboard::KeyCode::KEY_RIGHT_ARROW:
	case EventKeyboard::KeyCode::KEY_D:
		event->getCurrentTarget()->setPosition(++loc.x, loc.y);
		break;
	case EventKeyboard::KeyCode::KEY_UP_ARROW:
	case EventKeyboard::KeyCode::KEY_W:
		event->getCurrentTarget()->setPosition(loc.x, ++loc.y);
		break;
	case EventKeyboard::KeyCode::KEY_DOWN_ARROW:
	case EventKeyboard::KeyCode::KEY_S:
		event->getCurrentTarget()->setPosition(loc.x, --loc.y);
		break;
	}
}

void SceneEvent::onKeyRelease(EventKeyboard::KeyCode keyCode, Event * event)
{

}
