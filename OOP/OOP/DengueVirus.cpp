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

DengueVirus::DengueVirus(DengueVirus * v)
{
	v->Setm_dna(this->Getm_dna());
	v->Setm_resistance(this->Getm_resistance());
	for (int i = 0; i < 4; i++)
	{
		v->Setm_protein(this->Getm_protein());
	}
}

void DengueVirus::Setm_protein(char protein[4])
{
	for (int i = 0; i < 4; i++)
		m_protein[i] = protein[i];
}

char* DengueVirus::Getm_protein()
{
	return this->m_protein;
}

void DengueVirus::DoBorn()
{
	LoadDNAInformation();
	//srand((int)time(0));
	int x = 1 + rand() % 3;
	if (x == 1)
	{
		m_protein[1] = { 'N' };
		m_protein[2] = { 'S' };
		m_protein[3] = { '3' };
	}
	if (x == 2)
	{
		m_protein[1] = { 'N' };
		m_protein[2] = { 'S' };
		m_protein[3] = { '5' };
	}
	if (x == 3)
	{
		m_protein[1] = { 'E' };
	}
	//for (int i = 1; i < 4; i++) cout << m_protein[i] << " ";
}

list<Virus*> DengueVirus::DoClone()
{
	list<Virus*> virusList;
	virusList.push_back(new DengueVirus(*this));
	virusList.push_back(new DengueVirus(*this));
	return virusList;
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

