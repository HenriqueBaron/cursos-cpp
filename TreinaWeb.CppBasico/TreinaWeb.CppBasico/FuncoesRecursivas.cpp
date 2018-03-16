#include<iostream>

using namespace std;

// A função abaixo é utilizada para demonstrar o uso de recursividade em funções, o que é permitido em C++.
// É importante atentar ao risco de um deadlock na lógica.
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