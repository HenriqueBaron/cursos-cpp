#include<iostream>
#include<stdio.h> // A função printf que é utilizada faz parte deste header
#include<string>

using namespace std;

void DemonstracaoIOStream()
{
	// Caracteres especiais da função cout. Observe o uso do operador de inserção <<
	cout << "Quebra de\nlinha" << "\n";; // \n - quebra de linha
	cout << "Coluna 1\tColuna 2" << "\n"; // \t - tabulação
	cout << "Alerta do windows! \a" << "\n"; // \a - alerta padrão do Windows
	cout << "Texto apagado\b " << "\n"; // \b - Cursor volta uma posição
	cout << "Comeco do texto apagado \r    " << "\n"; // \r - Cursor volta ao início da linha
	cout << "\n";

	// A função printf é semelhante ao String.Format() do C#. Ela recebe a string com caracteres
	// específicos precedidos de "%" para denotar um valor a ser substituído com o parâmetro seguinte.
	float x = 3.1415;
	printf("Valor %f escrito com parametro \n", x);

	// Função cin para entrada de dados. Ao contrário do cout, utiliza um operador de extração.
	string mensagem;
	cin >> mensagem;
	cout << "Voce digitou " << mensagem << "\n";
}