#pragma once
class MyPoint
{
private:
	int mPosX;
	int mPosY;
public:
	MyPoint();
	~MyPoint();
	MyPoint(int x, int y);
	void Display();
	void SetX(int x);
	int GetX();
	void SetY(int y);
	int GetY();
	double Distance(MyPoint p);
};

