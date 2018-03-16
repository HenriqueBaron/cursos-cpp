#include <iostream>
#include "Carro.h"
#include <cassert>

// Evitar erro de compilação pelo uso de strcpy()
#pragma warning(disable : 4996)

using namespace std;

Carro::Carro(const char *novoNome)
{
	nome = new char[strlen(novoNome) + 1];
	// Assegura que a memória foi alocada
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

// Inicializa o campo estático
int Carro::count = 0;

// Implementação do método estático que conta o número de instâncias da classe Carro
int Carro::getCount() { return count; }

// Implementação do método que retorna o nome
const char *Carro::getNome() const { return nome; }