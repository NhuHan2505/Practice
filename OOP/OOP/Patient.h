#pragma once
class Patient
{
private:
	int m_resistance;
	list <Virus*> m_virusList;
	int m_state;
public:
	Patient();
	~Patient();
	int InitResistance();
	void DoStart();
	void TakeMedicine(int x);
	void DoDie();
	int GetState();
};

