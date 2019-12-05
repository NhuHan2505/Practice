#pragma once
#include "cocos2d.h"
#include "ObjectSprite.h"
USING_NS_CC;
class Rock: public ObjectSprite
{
public:
	Rock(Scene* scene);
	~Rock();
	void Init();
	void Update(float deltaTime);
};

