#pragma once
#include "Display.h"

// O header Display.h � inclu�do para poder definir o membro que � friend desta classe.

class Storage
{
public:
	Storage(int, double);

	friend void Display::DisplayItem(Storage&);

private:
	int m_nValue;
	double m_dValue;
};

