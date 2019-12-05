#include "Bullet.h"



Bullet::Bullet(Scene * scene)
{
	auto bullet = Sprite::create("");
	scene->addChild(bullet);
}

Bullet::~Bullet()
{
}

void Bullet::Init()
{
}

void Bullet::Update(float deltaTime)
{
}
