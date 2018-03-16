#include<iostream>

using namespace std;

void SomaPonteiros()
{
	int x[] = { 5,10 };

	cout << "x = " << x << "\n" // Mostra a posição de memória do primeiro elemento do array
		<< "x + 1 = " << x + 1 << "\n" // Mostra a posição de memória seguinte, que coincide com a do segundo elemento do array
		<< "*x = " << *x << "\n" // Mostra o valor do primeiro elemento do array
		<< "*x + 1 = " << *x + 1 << "\n" // Soma 1 ao valor do primeiro elemento do array
		<< "*(x + 1) = " << *(x + 1) << "\n" // Mostra o valor do segundo elemento do array
		<< "*(x + 1) + 1 = " << *(x + 1) + 1 << "\n\n"; // Soma 1 ao valor do segundo elemento do array.
}

void ComparacaoPonteiros()
{
	// É possível comparar ponteiros, como é mostrado no laço for abaixo
	int x[] = { 10,20,30,40,50 };

	for (int *ponteiro = x; ponteiro <= &x[2]; ponteiro++)
	{
		cout << *ponteiro << "\n\n";
	}
}

void ArrayPonteiros()
{
	// Como os ponteiros são um tipo de dado, eles podem ser utilizados em arrays também
	int *ponteiro[3];
	int Valor = 10;

	ponteiro[1] = &Valor;

	cout << *ponteiro[1] << "\n\n";
}

void DemonstracaoPonteiros()
{
	int Variavel = 50;

	// Para inicializar o ponteiro (que tem o tipo "int *") utilizamos o & para obter o endereço de memória (isto é, um ponteiro) da variável
	// cujo valor desejamos obter.
	int *Ponteiro = &Variavel;

	// Pode-se atribuir a um ponteiro o valor de outro ponteiro. Como resultado, a variável Ponteiro2 aponta para a mesma área de memória que
	// a variável Ponteiro.
	int *Ponteiro2 = Ponteiro;

	// Ao utilizar os ponteiros, colocar um asterisco no nome retorna o valor armazenado na área de memória do ponteiro.
	// Se o asterisco não for utilizado, o valor obtido é o da própria área de memória para qual o ponteiro se referencia.
	// O "&" antes do nome do ponteiro fará com que se obtenha a área de memória onde o próprio ponteiro está armazenado, obtendo
	// então um ponteiro para um ponteiro.
	cout << "O valor " << *Ponteiro << " esta armazenado em " << Ponteiro << "\n"
		"O ponteiro utilizado, por sua vez, se encontra em " << &Ponteiro << "\n\n";

	SomaPonteiros();
	ComparacaoPonteiros();
	ArrayPonteiros();
}