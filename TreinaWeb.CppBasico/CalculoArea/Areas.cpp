#include<iostream>
#include "Areas.h"

using namespace std;

void Areas::Quadrado()
{
	float lado, resultado;
	cout << "Digite o valor do lado do quadrado\n";
	cin >> lado;
	resultado = lado * lado;
	cout << "\nA area do quadrado e: " << resultado << "\n";
}

void Areas::Triangulo()
{
	float base, altura, resultado;
	cout << "Digite o valor da base do triangulo\n";
	cin >> base;
	cout << "\nDigite o valor da altura do triangulo\n";
	cin >> altura;
	resultado = base * altura / 2;
	cout << "\nA area do triangulo e: " << resultado << "\n";
}

void Areas::Paralelogramo()
{
	float base, altura, resultado;
	cout << "Digite o valor da base do paralelogramo\n";
	cin >> base;
	cout << "\nDigite o valor da altura do paralelogramo\n";
	cin >> altura;
	resultado = base * altura;
	cout << "\nA area do paralelogramo e: " << resultado << "\n";
}

void Areas::Losango()
{
	float diagonal1, diagonal2, resultado;
	cout << "Digite o valor da primeira diagonal do losango\n";
	cin >> diagonal1;
	cout << "\nDigite o valor da segunda diagonal do losango\n";
	cin >> diagonal2;
	resultado = diagonal1 * diagonal2 / 2;
	cout << "\nA area do losango e: " << resultado << "\n";
}

void Areas::Retangulo()
{
	float base, altura, resultado;
	cout << "Digite o valor da base do retangulo\n";
	cin >> base;
	cout << "\nDigite o valor da altura do retangulo\n";
	cin >> altura;
	resultado = base * altura;
	cout << "\nA area do retangulo e: " << resultado << "\n";
}

void Areas::Circulo()
{
	float const PI = 3.1415;
	float raio, resultado;
	cout << "Digite o valor do raio do circulo\n";
	cin >> raio;
	resultado = PI * (raio * raio);
	cout << "\nA area do circulo e: " << resultado << "\n";
}
