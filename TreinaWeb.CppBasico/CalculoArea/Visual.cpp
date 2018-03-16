#include<iostream>
#include "Visual.h"

using namespace std;

void Visual::Janela()
{
	//Linhas horizontais

	cout << "\n";

	for (int i = 0; i < 70; i++)
	{
		cout << '-';
	}
	
	cout << "\n";
}

void Visual::Rotulos()
{
	cout << "Programa para calculo de area\n\n";
	cout << "Escolha uma das opcoes abaixo para calculo de area, ou qualquer outro valor para sair\n";
	cout << "[1] Quadrado \n[2] Triangulo \n[3] Paralelogramo \n[4] Losango \n[5] Retangulo \n[6] Circulo\n\n";
}
