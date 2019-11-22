#include "stdafx.h"
#include "MyPoint.h"


MyPoint::MyPoint()
{
}


MyPoint::~MyPoint()
{
}

MyPoint::MyPoint(int x, int y)
{
	SetX(x);
	SetY(y);
}

void MyPoint::Display()
{
	cout << "(" << this->mPosX << "," << this->mPosY << ")" << endl;
}

void MyPoint::SetX(int x)
{
	this->mPosX = x;
}

int MyPoint::GetX()
{
	return this->mPosX;
}

void MyPoint::SetY(int y)
{
	this->mPosY = y;
}

int MyPoint::GetY()
{
	return this->mPosY;
}

double MyPoint::Distance(MyPoint p)
{
	return sqrt(pow(this->mPosX - p.mPosX, 2) + pow(this->mPosY - p.mPosY, 2));
}
