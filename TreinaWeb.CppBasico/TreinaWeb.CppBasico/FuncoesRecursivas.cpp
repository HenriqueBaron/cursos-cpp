#include<iostream>

using namespace std;

// A fun��o abaixo � utilizada para demonstrar o uso de recursividade em fun��es, o que � permitido em C++.
// � importante atentar ao risco de um deadlock na l�gica.
int	fatorial(int x)
{
	if (x > 1)
	{
		return (x * fatorial(x - 1));
	}
	else
	{
		return x;
	}
}