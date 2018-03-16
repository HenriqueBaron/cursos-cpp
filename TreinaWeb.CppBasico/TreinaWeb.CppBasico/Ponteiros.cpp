#include<iostream>

using namespace std;

void SomaPonteiros()
{
	int x[] = { 5,10 };

	cout << "x = " << x << "\n" // Mostra a posi��o de mem�ria do primeiro elemento do array
		<< "x + 1 = " << x + 1 << "\n" // Mostra a posi��o de mem�ria seguinte, que coincide com a do segundo elemento do array
		<< "*x = " << *x << "\n" // Mostra o valor do primeiro elemento do array
		<< "*x + 1 = " << *x + 1 << "\n" // Soma 1 ao valor do primeiro elemento do array
		<< "*(x + 1) = " << *(x + 1) << "\n" // Mostra o valor do segundo elemento do array
		<< "*(x + 1) + 1 = " << *(x + 1) + 1 << "\n\n"; // Soma 1 ao valor do segundo elemento do array.
}

void ComparacaoPonteiros()
{
	// � poss�vel comparar ponteiros, como � mostrado no la�o for abaixo
	int x[] = { 10,20,30,40,50 };

	for (int *ponteiro = x; ponteiro <= &x[2]; ponteiro++)
	{
		cout << *ponteiro << "\n\n";
	}
}

void ArrayPonteiros()
{
	// Como os ponteiros s�o um tipo de dado, eles podem ser utilizados em arrays tamb�m
	int *ponteiro[3];
	int Valor = 10;

	ponteiro[1] = &Valor;

	cout << *ponteiro[1] << "\n\n";
}

void DemonstracaoPonteiros()
{
	int Variavel = 50;

	// Para inicializar o ponteiro (que tem o tipo "int *") utilizamos o & para obter o endere�o de mem�ria (isto �, um ponteiro) da vari�vel
	// cujo valor desejamos obter.
	int *Ponteiro = &Variavel;

	// Pode-se atribuir a um ponteiro o valor de outro ponteiro. Como resultado, a vari�vel Ponteiro2 aponta para a mesma �rea de mem�ria que
	// a vari�vel Ponteiro.
	int *Ponteiro2 = Ponteiro;

	// Ao utilizar os ponteiros, colocar um asterisco no nome retorna o valor armazenado na �rea de mem�ria do ponteiro.
	// Se o asterisco n�o for utilizado, o valor obtido � o da pr�pria �rea de mem�ria para qual o ponteiro se referencia.
	// O "&" antes do nome do ponteiro far� com que se obtenha a �rea de mem�ria onde o pr�prio ponteiro est� armazenado, obtendo
	// ent�o um ponteiro para um ponteiro.
	cout << "O valor " << *Ponteiro << " esta armazenado em " << Ponteiro << "\n"
		"O ponteiro utilizado, por sua vez, se encontra em " << &Ponteiro << "\n\n";

	SomaPonteiros();
	ComparacaoPonteiros();
	ArrayPonteiros();
}