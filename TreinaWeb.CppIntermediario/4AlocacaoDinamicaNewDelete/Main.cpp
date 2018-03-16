#include <iostream>
#include "Carro.h"

using namespace std;

/* Este projeto demonstra o uso das keywords new e delete para instanciar objetos */

int main()
{
	// A DIFERENÇA ENTRE INSTANCIAR OBJETOS: 

	cout << "Numero de carros antes de instanciar" << endl;
	cout << Carro::getCount() << endl;
	cout << "\n\n";

	/* Instancia os carros. car01 e car02 são construídos no estilo C#, com a keyword new. Note 
	que não é criada uma variável tipo Carro, mas um ponteiro para um objeto do tipo Carro. */
	Carro *car01 = new Carro("Gol");
	cout << "\n\n";

	Carro *car02 = new Carro("Corsa");
	cout << "\n\n";

	/* car03 é instanciado como demonstrado até antes desta aula, chamando diretamente um construtor.
	Note que aqui a declaração não é de uma variável tipo ponteiro, mas é uma declaração by-value.*/
	Carro car03("Uno");
	cout << "\n\n";

	/* Perceba os especificadores de acesso "->" e "."
	É uma diferença apenas visual, que destaca que as variáveis car01 e car02 são ponteiros para um
	objeto (reference), e a variável car03 é o objeto em si (value). */
	cout << "Numero de carros depois de instanciar" << endl;
	cout << car01->getCount() << endl;
	cout << "  Carro 1 = " << car01->getNome() << endl;
	cout << "  Carro 2 = " << car02->getNome() << endl;
	cout << "  Carro 3 = " << car03.getNome() << endl;

	/* Em resumo, a declaração de um objeto como car03 aloca o objeto na memória stack, enquanto a
	declaração por ponteiro o instancia na memória heap, sendo chamada de alocação dinâmica de memória.
	
	Um objeto como car03 tem seu tempo de vida delimitado pelo escopo onde ele está instanciado, e ele
	é destruído automaticamente. É simples como declarar uma variável "int x = 0;"
	
	Já objetos como car01 e car02 são alocados em memória e precisam ser desalocados da memória manualmente
	(limpeza de referências). Por outro lado, eles têm a vantagem de poderem ter sua referência passada para
	outras seções de código e continuarem existindo, o que não aconteceria com um objeto alocado na stack. 
	
	A escolha entre o uso de cada um depende da situação, mas é preferível utilizar a declaração na stack
	quando possível, para evitar vazamentos de memória. Por outro lado, sabe-se que a memória stack é muito
	menor que a heap, então objetos grandes ou coleções grandes de objetos devem, por boa prática, ser
	instanciados e destruídos com new e delete. */
	// Deletando os carros e recuperando a memória
	delete car01;
	car01 = nullptr;
	delete car02;
	car02 = nullptr;
	//delete car03; // Erro de compilação, pois não se pode desalocar um objeto que não é declarado como ponteiro.

	cout << "Numero de carros apos o delete" << endl;
	cout << Carro::getCount() << endl;

	system("pause");
	return 0;
}