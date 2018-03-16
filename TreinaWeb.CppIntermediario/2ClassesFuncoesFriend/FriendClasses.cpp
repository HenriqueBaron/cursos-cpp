#include <iostream>

/* Uma classe pode ter como amiga uma classe inteira, como demonstrado abaixo. */

class StorageA
{
private:
	int m_nValue;
	double m_dValue;

public:
	StorageA(int nValue, double dValue)
	{
		m_nValue = nValue;
		m_dValue = dValue;
	}

	friend class DisplayA;
};

class DisplayA
{
private:
	bool m_displayIntFirst;

public:
	DisplayA(bool displayIntFirst)
	{
		m_displayIntFirst = displayIntFirst;
	}

	// Como se pode perceber, esta classe pode acessar todos os membros e campos da classe.W
	void DisplayItem(StorageA &storage)
	{
		if (m_displayIntFirst)
			std::cout << storage.m_nValue << " " << storage.m_dValue << std::endl;
		else
			std::cout << storage.m_dValue << " " << storage.m_nValue << std::endl;
	}
};
