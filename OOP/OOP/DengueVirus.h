#pragma once
class DengueVirus:public Virus
{
private:
	char m_protein[4];
public:
	DengueVirus();
	~DengueVirus();
	void DoBorn();
	void DoClone();
	void DoDie();
	void InitResistance();
};

