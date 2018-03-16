#include<iostream>
#include "Areas.h"
#include "Visual.h"

using namespace std;

class Escolha :private Areas
{
public:

	void EscolherCalculo()
	{
		int n;

	Inicio:

		cin >> n;

		switch (n)
		{
		case 1:
			Areas::Quadrado();
			goto Inicio;
			break;

		case 2:
			Areas::Triangulo();
			goto Inicio;
			break;

		case 3:
			Areas::Paralelogramo();
			goto Inicio;
			break;

		case 4:
			Areas::Losango();
			goto Inicio;
			break;

		case 5:
			Areas::Retangulo();
			goto Inicio;
			break;

		case 6:
			Areas::Circulo();
			goto Inicio;
			break;

		default:
			cout << "Adeus";
		}
	}
};

int main()
{
	Visual visual;

	visual.Janela();
	visual.Rotulos();

	Escolha e;

	e.EscolherCalculo();

	visual.Janela();

	system("pause");

	return 0;
}