#include <iostream>
#include "Carro.h"

using namespace std;

/* Este projeto demonstra o uso das keywords new e delete para instanciar objetos */

int main()
{
	// A DIFEREN�A ENTRE INSTANCIAR OBJETOS: 

	cout << "Numero de carros antes de instanciar" << endl;
	cout << Carro::getCount() << endl;
	cout << "\n\n";

	/* Instancia os carros. car01 e car02 s�o constru�dos no estilo C#, com a keyword new. Note 
	que n�o � criada uma vari�vel tipo Carro, mas um ponteiro para um objeto do tipo Carro. */
	Carro *car01 = new Carro("Gol");
	cout << "\n\n";

	Carro *car02 = new Carro("Corsa");
	cout << "\n\n";

	/* car03 � instanciado como demonstrado at� antes desta aula, chamando diretamente um construtor.
	Note que aqui a declara��o n�o � de uma vari�vel tipo ponteiro, mas � uma declara��o by-value.*/
	Carro car03("Uno");
	cout << "\n\n";

	/* Perceba os especificadores de acesso "->" e "."
	� uma diferen�a apenas visual, que destaca que as vari�veis car01 e car02 s�o ponteiros para um
	objeto (reference), e a vari�vel car03 � o objeto em si (value). */
	cout << "Numero de carros depois de instanciar" << endl;
	cout << car01->getCount() << endl;
	cout << "  Carro 1 = " << car01->getNome() << endl;
	cout << "  Carro 2 = " << car02->getNome() << endl;
	cout << "  Carro 3 = " << car03.getNome() << endl;

	/* Em resumo, a declara��o de um objeto como car03 aloca o objeto na mem�ria stack, enquanto a
	declara��o por ponteiro o instancia na mem�ria heap, sendo chamada de aloca��o din�mica de mem�ria.
	
	Um objeto como car03 tem seu tempo de vida delimitado pelo escopo onde ele est� instanciado, e ele
	� destru�do automaticamente. � simples como declarar uma vari�vel "int x = 0;"
	
	J� objetos como car01 e car02 s�o alocados em mem�ria e precisam ser desalocados da mem�ria manualmente
	(limpeza de refer�ncias). Por outro lado, eles t�m a vantagem de poderem ter sua refer�ncia passada para
	outras se��es de c�digo e continuarem existindo, o que n�o aconteceria com um objeto alocado na stack. 
	
	A escolha entre o uso de cada um depende da situa��o, mas � prefer�vel utilizar a declara��o na stack
	quando poss�vel, para evitar vazamentos de mem�ria. Por outro lado, sabe-se que a mem�ria stack � muito
	menor que a heap, ent�o objetos grandes ou cole��es grandes de objetos devem, por boa pr�tica, ser
	instanciados e destru�dos com new e delete. */
	// Deletando os carros e recuperando a mem�ria
	delete car01;
	car01 = nullptr;
	delete car02;
	car02 = nullptr;
	//delete car03; // Erro de compila��o, pois n�o se pode desalocar um objeto que n�o � declarado como ponteiro.

	cout << "Numero de carros apos o delete" << endl;
	cout << Carro::getCount() << endl;

	system("pause");
	return 0;
}