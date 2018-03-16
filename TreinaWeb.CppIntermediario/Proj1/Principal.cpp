#include<iostream>
#include<string>
#include "Tempo.h"

using namespace std;

/* Como a passagem de parâmetros por referência é mais performante (por não criar cópias d objeto em buffer 
ao chamar o método), é comum passar a referência do objeto. Para garantir que o objeto não seja alterado na
execução do método, é comum colocar uma referência const. Se o parâmetro não fosse const, esse método não
poderia ser chamado por um objeto const.*/
void ImprimirTempo(const Tempo &tempo)
{
	tempo.Impressao();
}

int main()
{
	/* Assim como constantes de tipos elementares, objetos const não podem ter seu valor
	alterado após a sua inicialização (com o construtor)*/
	Tempo tempoNaoConst(10, 10);
	const Tempo tempoConst(12, 10); // Inicializa o valor no construtor

	// O membro público hora não pode ser modificado em um objeto const, pois isso violaria a constância do objeto
	tempoNaoConst.hora = 10;
	//tempoConst.hora = 10;

	// Para objetos const, também não é permitido chamar métodos que alterem o valor de dados da classe.
	tempoNaoConst.SetHora(2);
	//tempoConst.SetHora(2);

	/* E mesmo para métodos que apenas lêem dados da classe (sem alterá-los), se o método não for declarado como 
	const, um objeto const não poderá acessá-lo.
	REGRA: Por conta disso, crie todo método que não altera o estado (valor) do objeto da classe como const. */
	tempoNaoConst.GetHora(); // Método GetHora foi declarado como const
	tempoConst.GetHora();

	tempoNaoConst.GetMinuto(); // Intencionalmente "esqueceu-se" de declarar o método GetMinuto como const.
	//tempoConst.GetMinuto(); // Esta chamada provoca um erro de compilação.
	

	ImprimirTempo(tempoConst);
	cout << "\n";
	ImprimirTempo(tempoNaoConst);
	cout << "\n";

	system("pause");

	return 0;
}