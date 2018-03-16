#pragma once
#include "Display.h"

// O header Display.h é incluído para poder definir o membro que é friend desta classe.

class Storage
{
public:
	Storage(int, double);

	friend void Display::DisplayItem(Storage&);

private:
	int m_nValue;
	double m_dValue;
};

