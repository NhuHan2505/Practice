// OOP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	//MyPoint *p=new MyPoint(1,2);
	//cout << p->Distance(MyPoint(0, 0)) << endl;
	//Virus v;
	//v.LoadDNAInformation();
	Virus *v = new FluVirus();
	v->DoBorn();
	v->InitResistance();
	system("pause");
	return 0;
}

