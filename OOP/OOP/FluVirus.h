#pragma once
class FluVirus:public Virus
{
private:
	int m_color;
public:
	FluVirus();
	~FluVirus();
	FluVirus(int color);
	void Setm_color(int color);
	int Getm_color();
	void DoBorn();
	void DoClone();
	void DoDie();
	void InitResistance();
};

