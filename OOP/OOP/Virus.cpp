#include "stdafx.h"
#include "Virus.h"


Virus::Virus()
{
}


Virus::~Virus()
{
}

Virus::Virus(char * dna, int resistance)
{
	Setm_dna(dna);
	Setm_resistance(resistance);
}

char * Virus::Getm_dna()
{
	return this->m_dna;
}

void Virus::Setm_dna(char * dna)
{
	this->m_dna = dna;
}

int Virus::Getm_resistance()
{
	return this->m_resistance;
}

void Virus::Setm_resistance(int resistance)
{
	this->m_resistance = resistance;
}
