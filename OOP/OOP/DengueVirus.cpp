#include "stdafx.h"
#include "DengueVirus.h"


DengueVirus::DengueVirus()
{
	for (int i = 0; i < 4; i++)
		m_protein[i] = ' ';
}


DengueVirus::~DengueVirus()
{
	cout << "Dengue Virus is died" << endl;
}

void DengueVirus::DoBorn()
{
	LoadDNAInformation();
	int x = 1 + rand() % 3;
	if (x == 1)
	{
		m_protein[1] = { 'N' };
		m_protein[2] = { 'S' };
		m_protein[1] = { '3' };
	}
	if (x == 2)
	{
		m_protein[1] = { 'N' };
		m_protein[2] = { 'S' };
		m_protein[1] = { '5' };
	}
	if (x == 3)
	{
		m_protein[1] = { 'E' };
	}
}

void DengueVirus::DoClone()
{
	DengueVirus *v = new DengueVirus();
	v->Setm_dna(this->Getm_dna);
	v->Setm_dna(this->Getm_resistance);
	for (int i = 0; i < 4; i++)
	{
		v->m_protein[i] = m_protein[i];
	}
}

void DengueVirus::DoDie()
{
	this->Setm_dna("");
	this->Setm_resistance(0);
	for (int i = 0; i < 4; i++)
		this->m_protein[i] = NULL;
}

void DengueVirus::InitResistance()
{
	if (m_protein[3] == '3') this->Setm_resistance(1 + rand() % 10);
	if (m_protein[3] == '5') this->Setm_resistance(11 + rand() % 10);
	if (m_protein[1] == 'E') this->Setm_resistance(21 + rand() % 10);
}

