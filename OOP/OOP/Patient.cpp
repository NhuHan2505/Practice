#include "stdafx.h"
#include "Patient.h"


Patient::Patient()
{
	m_resistance = 1000 + rand() % 8001;
	m_state = 1;
}


Patient::~Patient()
{
}

int Patient::InitResistance()
{
	return rand() % (9000 - 1000 + 1) + 1000;
}

void Patient::DoStart()
{
	int x = 10 + rand() % 11;
	for (int i = 0; i < x; i++)
	{
		int k = rand() % 2;
		if (k == 1) {
			Virus *v = new FluVirus();
			v->DoBorn();
			m_virusList.push_back(v);
		}
		else
		{
			Virus *v = new DengueVirus();
			v->DoBorn();
			m_virusList.push_back(v);
		}

	}
	m_state = 1;
}

void Patient::TakeMedicine(int x)
{
	list <Virus*>::iterator it;
	for (it = m_virusList.begin(); it != m_virusList.end(); it++) {
		cout << *it << " ";
	}
	for (it = m_virusList.begin(); it != m_virusList.end(); it++) {
		Virus *v;
		v = *it;
		v->ReduceResistance(x);
		m_virusList.push_back(v);
		cout << *it << " ";
	}
}

void Patient::DoDie()
{
	m_virusList.clear();
	m_state = 0;
}

int Patient::GetState()
{
	return this->m_state;
}
