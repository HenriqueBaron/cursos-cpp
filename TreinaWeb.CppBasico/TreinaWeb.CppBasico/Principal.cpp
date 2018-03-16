#include<iostream>
#include<string>
#include "Carro.h" // Exemplo da utiliza��o de um arquivo de cabe�alho para chamada de uma classe em arquivo externo.

using namespace std;

int var_externa = 100; // Vari�vel utilizada como exemplo de vari�vel externa, que ser� referenciada em outro arquivo de c�digo.

// Em C++, � preciso declarar o prot�tipo de uma fun��o se ela for escrita depois da fun��o main ou em outro arquivo de c�digo. Perceba que a fun��o exibir_mensagem
// dispensa um prot�tipo, diferentemente das outras.
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

	// Exemplo de chamada de uma fun��o contendo uma vari�vel est�tica:
	/*soma();
	soma();
	soma();
	soma();*/

	// Exemplo de utiliza��o de vari�vel externa, referenciada em outro arquivo de c�digo
	//Mensagem();

	// Vari�veis do tipo register: valores s�o armazenados em registradores da CPU, e c�lculos podem ser processados muito mais rapidamente.
	//register int var_register = 0;

	// Demonstra��o da declara��o de arrays.
	//ArrayUnidimensional();
	//ArrayBidimensional();
	//ArrayTridimensional();

	// Demonstra��o de structs
	//TesteStruct();

	/* Os par�metros argc e argv[] colocados no main s�o opcionais. Eles indicam, respectivamente, o n�mero de argumentos passados na linha de comando
	para chamar o programa, e os argumentos passados. argc tem sempre o valor m�nimo de 1, pois o pr�prio nome do programa tamb�m � considerado um argumento */
	/*cout << "Foram recebidos " << argc << " parametros." << "\n"
		<< "Os parametros sao:" << "\n";
	for (int i = 0; i < argc; i++)
	{
		cout << argv[i] << "\n";
	}*/

	// Exemplo de passagem de um array como par�metro, que � sempre por refer�ncia.
	/*int arrayTeste[5] = { 1, 2, 3, 4, 5 };
	ExibirArray(arrayTeste);
	ArrayParametro(arrayTeste);
	ExibirArray(arrayTeste);*/

	// Exemplo de uso de fun��o recursiva
	//cout << fatorial(5);

	//DemonstracaoPonteiros();

	//DemonstracaoIOStream();

	// Este exemplo apenas declara uma classe que se encontra em um arquivo externo. Para isso, foi preciso criar um arquivo de header (cabe�alho).
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