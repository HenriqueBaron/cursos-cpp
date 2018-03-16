#include <iostream>
#include "Tempo.h"

using namespace std;

Tempo::Tempo(int hora, int min)
{
	SetTempo(hora, min);
}

void Tempo::SetTempo(int hora, int min)
{
	SetHora(hora);
	SetMinuto(min);
}

void Tempo::SetHora(int h)
{
	// Operador ternário: se "h" valer entre 0 e 24, hora recebe h. Caso contrário, recebe zero.
	hora = (h >= 0 && h < 24) ? h : 0;
}

void Tempo::SetMinuto(int m)
{
	minuto = (m >= 0 && m < 60) ? m : 0;
}

void Tempo::SetTeste(int h, int m) const
{
	// Como este método foi definido como const, não é permitido modificar valores do objeto dentro dele.
	//hora = h;
	//minuto = m;
}

int Tempo::GetHora() const
{
	return hora;
}

int Tempo::GetMinuto()
{
	return minuto;
}

void Tempo::Impressao() const
{
	cout << (hora < 10 ? "0" : "") << hora << ':' << (minuto < 10 ? "0" : "") << minuto << "\n";
}