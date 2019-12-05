#pragma once
#include "cocos2d.h"
USING_NS_CC;
class ObjectSprite
{
protected:
	Sprite* m_sprite;
public:
	ObjectSprite();
	~ObjectSprite();
	virtual void Init() = 0;
	virtual void Update(float deltaTime) = 0;
};

