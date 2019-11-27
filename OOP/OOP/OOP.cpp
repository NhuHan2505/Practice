// OOP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vld.h>
#include "Patient.h"



int main()
{
	Patient p;
	int t = 0;
	//p.DoStart();
	while (p.GetState() == 1)
	{
		cout << "Take Medicine (0 = NO, 1 = YES)" << endl;
		cin >> t;
		if (t == 1)
		{
			int min = 1;
			int max = 60;
			srand((int)time(0));
			int medicine_resistance = min + (rand() % (int)(max - min + 1));
			cout << medicine_resistance << endl;
			p.TakeMedicine(medicine_resistance);
		}
	}
	system("pause");
	return 0;
}

