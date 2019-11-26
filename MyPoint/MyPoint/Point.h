#pragma once
class Point
{
private:
	int mPosX;
	int mPosY;
public:
	Point();
	~Point();
	Point(int x, int y);
	void Display();
	void SetX(int x);
	int GetX();
	void SetY(int y);
	int GetY();
	double Distance(Point p);
};

