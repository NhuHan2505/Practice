// MyPoint.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vld.h>

int main()
{
	Point *p=new Point(1,2);
	cout << p->Distance(Point(0, 0)) << endl;
	delete p;
	system("pause");
    return 0;
}

