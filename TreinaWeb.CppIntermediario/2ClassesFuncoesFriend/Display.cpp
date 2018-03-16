#include <iostream>
#include "Display.h"
#include "Storage.h"

Display::Display(bool displayIntFirst)
{
	m_displayIntFirst = displayIntFirst;
}

// O método DisplayItem pode acessar os dados privados da classe storage, pois é 
// um friend member function.
void Display::DisplayItem(Storage& storage)
{
	if (m_displayIntFirst)
		std::cout << storage.m_nValue << " " << storage.m_dValue << '\n';
	else
		std::cout << storage.m_dValue << " " << storage.m_nValue << '\n';
}
