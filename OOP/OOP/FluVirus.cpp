#include "stdafx.h"
#include "FluVirus.h"


FluVirus::FluVirus(): Virus()
{
	this->Setm_color(0);
}


FluVirus::~FluVirus()
{
	cout << "FluVirus is died" << endl;
}

FluVirus::FluVirus(int color): Virus()
{
	this->Setm_color(color);
}

FluVirus::FluVirus(FluVirus * v)
{
	v->Setm_dna(this->Getm_dna());
	v->Setm_resistance(this->Getm_resistance());
	v->Setm_color(this->Getm_color());
}

void FluVirus::Setm_color(int color)
{
	this->m_color = color;
}

int FluVirus::Getm_color()
{
	return this->m_color;
}

void FluVirus::DoBorn()
{
	LoadDNAInformation();
	//srand((int)time(0));
	this->m_color = rand() % 2;
	cout << this->m_color << endl;
}

list<Virus*> FluVirus::DoClone()
{
	list<Virus*> virusList;
	virusList.push_back(new FluVirus(*this));
	return list<Virus*>();
}



void FluVirus::DoDie()
{
	this->Setm_dna("");
	this->Setm_resistance(0);
	this->Setm_color(0);
}

void FluVirus::InitResistance()
{
	srand((int)time(0));
	if (this->m_color == 1)
		Setm_resistance(rand() % (20 - 10 + 1) + 10);
	else
		Setm_resistance(rand() % (15 - 10 + 1) + 10);
	cout << Getm_resistance() << endl;
}
