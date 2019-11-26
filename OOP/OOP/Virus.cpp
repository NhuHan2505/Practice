#include "stdafx.h"
#include "Virus.h"


Virus::Virus()
{
	this->Setm_dna("");
	this->Setm_resistance(0);
}


Virus::~Virus()
{
	cout << "Virus is died" << endl;
}

Virus::Virus(char * dna, int resistance)
{
	Setm_dna(dna);
	Setm_resistance(resistance);
}

Virus::Virus(Virus * v)
{
	v->Setm_dna(this->Getm_dna());
	v->Setm_resistance(this->Getm_resistance());
	delete v;
}

char * Virus::Getm_dna()
{
	return this->m_dna;
}

void Virus::Setm_dna(char * dna)
{
	this->m_dna = dna;
	//delete dna;
}

int Virus::Getm_resistance()
{
	return this->m_resistance;
}

void Virus::Setm_resistance(int resistance)
{
	this->m_resistance = resistance;
}

void Virus::LoadDNAInformation()
{
	fstream f; //khai bao con tro file f
	f.open("ATGX.txt", ios::in); //mo file ra de doc
	if (f.fail()) //flie khong ton tai f.fail() tra ve true, file ton tai tra ve false
		cout << "Khong the mo file" << endl;
	else {
		char s; char *t = new char();
		while (!f.eof()) {//eof() tra ve true neu ket thuc file
			f >> s;//doc cac phan tu trong file
			*t = s;
			m_dna = t;
			cout << *m_dna;
		}
		cout << endl;
		f.close();
	}
}

int Virus::ReduceResistance(int medical_resistance)
{
	if (m_resistance <= 0) 
		return m_resistance = 0;
	else return m_resistance-=medical_resistance;
}
