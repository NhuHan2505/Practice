#pragma once
class FluVirus:public Virus
{
private:
	int m_color;
public:
	FluVirus();
	~FluVirus();
	void DoBorn();
	MyPoint DoClone();
	void DoDie();
	void InitResistance();
};

