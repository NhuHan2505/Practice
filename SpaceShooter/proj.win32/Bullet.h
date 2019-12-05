#pragma once
#include "cocos2d.h"
#include "ObjectSprite.h"
USING_NS_CC;
class Bullet: public ObjectSprite
{
public:
	Bullet(Scene* scene);
	~Bullet();
	void Init();
	void Update(float deltaTime);
};

