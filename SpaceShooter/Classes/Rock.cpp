#include "Rock.h"



Rock::Rock(Scene * scene)
{
	auto rock = Sprite::create("./Sprites/Rock/aestroid_dark.png");
	scene->addChild(rock);
}

Rock::~Rock()
{
}

void Rock::Init()
{
}

void Rock::Update(float deltaTime)
{
}
