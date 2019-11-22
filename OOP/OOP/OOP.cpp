// OOP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MyPoint.h"


int main()
{
	MyPoint* p = new MyPoint(3, 4);
	p->Display();
	cout << p->Distance(MyPoint(0, 0)) << endl;
	system("pause");
	return 0;
}

