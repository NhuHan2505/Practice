#include "stdafx.h"
#include "Point.h"


Point::Point()
{
	SetX(0);
	SetY(0);
}


Point::~Point()
{
}

Point::Point(int x, int y)
{
	SetX(x);
	SetY(y);
}

void Point::Display()
{
	cout << "(" << this->mPosX << "," << this->mPosY << ")" << endl;
}

void Point::SetX(int x)
{
	this->mPosX = x;
}

int Point::GetX()
{
	return this->mPosX;
}

void Point::SetY(int y)
{
	this->mPosY = y;
}

int Point::GetY()
{
	return this->mPosY;;
}

double Point::Distance(Point p)
{
	return sqrt(pow(this->mPosX - p.mPosX, 2) + pow(this->mPosY - p.mPosY, 2));;
}
