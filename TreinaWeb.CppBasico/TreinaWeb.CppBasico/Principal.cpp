#include<iostream>
#include<string>
#include "Carro.h" // Exemplo da utilização de um arquivo de cabeçalho para chamada de uma classe em arquivo externo.

using namespace std;

int var_externa = 100; // Variável utilizada como exemplo de variável externa, que será referenciada em outro arquivo de código.

// Em C++, é preciso declarar o protótipo de uma função se ela for escrita depois da função main ou em outro arquivo de código. Perceba que a função exibir_mensagem
// dispensa um protótipo, diferentemente das outras.
void soma();
void Mensagem();
void ArrayUnidimensional();
void ArrayBidimensional();
void ArrayTridimensional();
void ArrayParametro(int vetor[5]);
void ExibirArray(int vetor[5]);
void TesteStruct();
int fatorial(int x);
void DemonstracaoPonteiros();
void DemonstracaoIOStream();
void DemonstracaoDiretivas();

void exibir_mensagem(string mensagem)
{
	cout << mensagem << "\n";
}

int main(int argc, char *argv[])
{
	/*string mensagem = "Ola mundo!";
	exibir_mensagem(mensagem);*/

	// Exemplo de chamada de uma função contendo uma variável estática:
	/*soma();
	soma();
	soma();
	soma();*/

	// Exemplo de utilização de variável externa, referenciada em outro arquivo de código
	//Mensagem();

	// Variáveis do tipo register: valores são armazenados em registradores da CPU, e cálculos podem ser processados muito mais rapidamente.
	//register int var_register = 0;

	// Demonstração da declaração de arrays.
	//ArrayUnidimensional();
	//ArrayBidimensional();
	//ArrayTridimensional();

	// Demonstração de structs
	//TesteStruct();

	/* Os parâmetros argc e argv[] colocados no main são opcionais. Eles indicam, respectivamente, o número de argumentos passados na linha de comando
	para chamar o programa, e os argumentos passados. argc tem sempre o valor mínimo de 1, pois o próprio nome do programa também é considerado um argumento */
	/*cout << "Foram recebidos " << argc << " parametros." << "\n"
		<< "Os parametros sao:" << "\n";
	for (int i = 0; i < argc; i++)
	{
		cout << argv[i] << "\n";
	}*/

	// Exemplo de passagem de um array como parâmetro, que é sempre por referência.
	/*int arrayTeste[5] = { 1, 2, 3, 4, 5 };
	ExibirArray(arrayTeste);
	ArrayParametro(arrayTeste);
	ExibirArray(arrayTeste);*/

	// Exemplo de uso de função recursiva
	//cout << fatorial(5);

	//DemonstracaoPonteiros();

	//DemonstracaoIOStream();

	// Este exemplo apenas declara uma classe que se encontra em um arquivo externo. Para isso, foi preciso criar um arquivo de header (cabeçalho).
	//Carro carro;
	
	DemonstracaoDiretivas();

	cout << "\n";
	system("pause");
	return 0;
}

void soma()
{
	static int x = 0;
	x++;

	cout << x << "\n";
}