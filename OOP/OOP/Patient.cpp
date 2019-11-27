#include "stdafx.h"
#include "Patient.h"


Patient::Patient()
{
	m_resistance = 1000 + rand() % 8001;
	m_state = 1;
	DoStart();
}


Patient::~Patient()
{
}

int Patient::InitResistance()
{
	srand((int)time(0));
	return rand() % (9000 - 1000 + 1) + 1000;
}

void Patient::DoStart()
{
	srand((int)time(0));
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

void Patient::TakeMedicine(int medicine)
{
	list<Virus*>::iterator it;
	for (it=m_virusList.begin(); it!= m_virusList.end();)
	{
		if ((*it)->ReduceResistance(medicine) <= 0)
		{
			//cout << (*it)->ReduceResistance(medicine) << endl;
			//(*it)->DoDie();
			delete (*it); //fix leak
			it=m_virusList.erase(it);
		}
		else
		{
			list<Virus*> virusList ;
			virusList = (*it)->DoClone();
			int x = virusList.size();
			//cout << x << endl;
			while (x > 0)
			{
				m_virusList.push_back(virusList.back());
				virusList.pop_back();
				x--;
			}
			this->m_resistance = this->m_resistance - (*it)->Getm_resistance();
			if (this->m_resistance <= 0)
			{
				this->DoDie();
				//cout << "Patient die" << endl;
				//break;
			}	
		}
	}
	if (m_state = 0)
	{
		cout << "DIE!!!" << endl;
		list<Virus*> ::iterator it;
		for (it = m_virusList.begin(); it != m_virusList.end(); it++)
		{
			delete *it;
		}
	}
	else
	{
		cout << "ALIVE!!!" << endl;
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
