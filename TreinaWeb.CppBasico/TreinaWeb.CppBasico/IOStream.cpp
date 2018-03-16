#include<iostream>
#include<stdio.h> // A fun��o printf que � utilizada faz parte deste header
#include<string>

using namespace std;

void DemonstracaoIOStream()
{
	// Caracteres especiais da fun��o cout. Observe o uso do operador de inser��o <<
	cout << "Quebra de\nlinha" << "\n";; // \n - quebra de linha
	cout << "Coluna 1\tColuna 2" << "\n"; // \t - tabula��o
	cout << "Alerta do windows! \a" << "\n"; // \a - alerta padr�o do Windows
	cout << "Texto apagado\b " << "\n"; // \b - Cursor volta uma posi��o
	cout << "Comeco do texto apagado \r    " << "\n"; // \r - Cursor volta ao in�cio da linha
	cout << "\n";

	// A fun��o printf � semelhante ao String.Format() do C#. Ela recebe a string com caracteres
	// espec�ficos precedidos de "%" para denotar um valor a ser substitu�do com o par�metro seguinte.
	float x = 3.1415;
	printf("Valor %f escrito com parametro \n", x);

	// Fun��o cin para entrada de dados. Ao contr�rio do cout, utiliza um operador de extra��o.
	string mensagem;
	cin >> mensagem;
	cout << "Voce digitou " << mensagem << "\n";
}