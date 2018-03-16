#include<iostream>

using namespace std;

// Importante: perceba que a declaração de arrays em C++ é diferente de C#. Aqui a definição de array é dada pelo tamanho da dimensão após
// o nome, e não por um "[]" após o tipo.
void ArrayUnidimensional()
{
	// Se o array não tiver sido inicializado, valores aleatórios irão aparecer, mas nenhum erro será gerado (como acontece em C#).
	int vetor[5] = { 4, 3, 2, 1, 0 };

	for (int i = 0; i < 5; i++)
	{
		cout << vetor[i] << "\n";
	}
}

void ArrayBidimensional()
{
	// Inicialização do array 2D
	int matriz[2][2] = {
		10, 20,
		30, 40
	};

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << matriz[i][j] << " ";
		}
		cout << "\n";
	}
}

void ArrayTridimensional()
{
	// A inicialização de matrizes de ordem maior é mais complexa:
	int matriz[2][2][2] = {
		{
			{10, 20},
			{30, 40}
		},
		{
			{50, 60},
			{70, 80}}
	};

	for (int i = 0; i < 2; i++)
	{
		cout << "Camada " << i << "\n";
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				cout << matriz[i][j][k] << " ";
			}
			cout << "\n";
		}
		cout << "\n";
	}
}

void ArrayParametro(int vetor[5])
{
	// Esta função tem por objetivo demonstrar que arrays são sempre passados POR REFERÊNCIA.
	for (int i = 0; i < 5; i++)
	{
		vetor[i]++;
	}
}

void ExibirArray(int vetor[5])
{
	for (int i = 0; i < 5; i++)
	{
		cout << vetor[i] << "\n";
	}
	cout << "\n";
}
