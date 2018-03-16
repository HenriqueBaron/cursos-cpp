#include<iostream>

using namespace std;

// Importante: perceba que a declara��o de arrays em C++ � diferente de C#. Aqui a defini��o de array � dada pelo tamanho da dimens�o ap�s
// o nome, e n�o por um "[]" ap�s o tipo.
void ArrayUnidimensional()
{
	// Se o array n�o tiver sido inicializado, valores aleat�rios ir�o aparecer, mas nenhum erro ser� gerado (como acontece em C#).
	int vetor[5] = { 4, 3, 2, 1, 0 };

	for (int i = 0; i < 5; i++)
	{
		cout << vetor[i] << "\n";
	}
}

void ArrayBidimensional()
{
	// Inicializa��o do array 2D
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
	// A inicializa��o de matrizes de ordem maior � mais complexa:
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
	// Esta fun��o tem por objetivo demonstrar que arrays s�o sempre passados POR REFER�NCIA.
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
