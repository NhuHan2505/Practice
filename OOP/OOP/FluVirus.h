#pragma once
#include "Virus.h"
class FluVirus:public Virus
{
private:
	int m_color;
public:
	FluVirus();
	~FluVirus();
	FluVirus(int color);
	FluVirus(FluVirus *v);
	void Setm_color(int color);
	int Getm_color();
	void DoBorn();
	list<Virus*> DoClone();
	void DoDie();
	void InitResistance();
};

