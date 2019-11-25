#include "stdafx.h"
#include "FluVirus.h"


FluVirus::FluVirus()
{
	this->Setm_color(0);
}


FluVirus::~FluVirus()
{
	cout << "FluVirus is died" << endl;
}

FluVirus::FluVirus(int color)
{
	this->Setm_color(color);
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
	this->m_color = rand() % 2;
	cout << this->m_color << endl;
}

void FluVirus::DoClone()
{
	FluVirus *v = new FluVirus();
	v->Setm_dna(this->Getm_dna);
	v->Setm_resistance(this->Getm_resistance);
	v->Setm_color(this->Getm_color);
}

void FluVirus::DoDie()
{
	this->Setm_dna("");
	this->Setm_resistance(0);
	this->Setm_color(0);
}

void FluVirus::InitResistance()
{
	if (this->m_color == 1)
		Setm_resistance(rand() % (20 - 10 + 1) + 10);
	else
		Setm_resistance(rand() % (15 - 10 + 1) + 10);
	cout << Getm_resistance() << endl;
}
