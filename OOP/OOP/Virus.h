#pragma once
class Virus
{
private:
	char* m_dna;
	int m_resistance;
public:
	Virus();
	~Virus();
	Virus(char* dna, int resistance);
	char* Getm_dna();
	void Setm_dna(char* dna);
	int Getm_resistance();
	void Setm_resistance(int resistance);
	void LoadDNAInformation();
	//void ReduceResistance(int medical_resistance);
	virtual void DoBorn() = 0;
	virtual MyPoint DoClone() = 0;
	virtual void DoDie() = 0;
	virtual void InitResistance() = 0;
};

