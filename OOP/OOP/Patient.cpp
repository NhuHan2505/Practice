#include "stdafx.h"
#include "Patient.h"


Patient::Patient()
{
}


Patient::~Patient()
{
}

int Patient::InitResistance()
{
	return rand() % (9000 - 1000 + 1) + 1000;
}

int Patient::GetState()
{
	return this->m_state;
}
