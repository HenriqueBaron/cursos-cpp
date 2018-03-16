#include <iostream>
#include "Carro.h"
#include <cassert>

// Evitar erro de compila��o pelo uso de strcpy()
#pragma warning(disable : 4996)

using namespace std;

Carro::Carro(const char *novoNome)
{
	nome = new char[strlen(novoNome) + 1];
	// Assegura que a mem�ria foi alocada
	assert(nome != 0);
	strcpy(nome, novoNome);

	count++;

	cout << "Construtor para o carro " << nome << " foi chamado." << endl;
}

Carro::~Carro()
{
	cout << "Destruidor para o carro " << nome << " foi chamado." << endl;

	delete[] nome;
	count--;
}

// Inicializa o campo est�tico
int Carro::count = 0;

// Implementa��o do m�todo est�tico que conta o n�mero de inst�ncias da classe Carro
int Carro::getCount() { return count; }

// Implementa��o do m�todo que retorna o nome
const char *Carro::getNome() const { return nome; }