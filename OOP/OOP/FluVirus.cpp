#include "stdafx.h"
#include "FluVirus.h"


FluVirus::FluVirus()
{
}


FluVirus::~FluVirus()
{
}

void FluVirus::DoBorn()
{
	LoadDNAInformation();
	this->m_color = rand() % 2;
	cout << this->m_color << endl;
}

MyPoint FluVirus::DoClone()
{
	return MyPoint();
}

void FluVirus::DoDie()
{
}

void FluVirus::InitResistance()
{
	if (this->m_color == 1)
		Setm_resistance(rand() % (20 - 10 + 1) + 10);
	else
		Setm_resistance(rand() % (15 - 10 + 1) + 10);
	cout << Getm_resistance() << endl;
}
