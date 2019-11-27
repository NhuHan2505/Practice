#pragma once
#include "Virus.h"
class DengueVirus:public Virus
{
private:
	char m_protein[4];
public:
	DengueVirus();
	~DengueVirus();
	DengueVirus(char protein[4]);
	DengueVirus(DengueVirus *v);
	void Setm_protein(char protein[4]);
	char* Getm_protein();
	void DoBorn();
	list<Virus*> DoClone();
	void DoDie();
	void InitResistance();
};

