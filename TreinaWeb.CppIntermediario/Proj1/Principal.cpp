#include<iostream>
#include<string>
#include "Tempo.h"

using namespace std;

/* Como a passagem de par�metros por refer�ncia � mais performante (por n�o criar c�pias d objeto em buffer 
ao chamar o m�todo), � comum passar a refer�ncia do objeto. Para garantir que o objeto n�o seja alterado na
execu��o do m�todo, � comum colocar uma refer�ncia const. Se o par�metro n�o fosse const, esse m�todo n�o
poderia ser chamado por um objeto const.*/
void ImprimirTempo(const Tempo &tempo)
{
	tempo.Impressao();
}

int main()
{
	/* Assim como constantes de tipos elementares, objetos const n�o podem ter seu valor
	alterado ap�s a sua inicializa��o (com o construtor)*/
	Tempo tempoNaoConst(10, 10);
	const Tempo tempoConst(12, 10); // Inicializa o valor no construtor

	// O membro p�blico hora n�o pode ser modificado em um objeto const, pois isso violaria a const�ncia do objeto
	tempoNaoConst.hora = 10;
	//tempoConst.hora = 10;

	// Para objetos const, tamb�m n�o � permitido chamar m�todos que alterem o valor de dados da classe.
	tempoNaoConst.SetHora(2);
	//tempoConst.SetHora(2);

	/* E mesmo para m�todos que apenas l�em dados da classe (sem alter�-los), se o m�todo n�o for declarado como 
	const, um objeto const n�o poder� acess�-lo.
	REGRA: Por conta disso, crie todo m�todo que n�o altera o estado (valor) do objeto da classe como const. */
	tempoNaoConst.GetHora(); // M�todo GetHora foi declarado como const
	tempoConst.GetHora();

	tempoNaoConst.GetMinuto(); // Intencionalmente "esqueceu-se" de declarar o m�todo GetMinuto como const.
	//tempoConst.GetMinuto(); // Esta chamada provoca um erro de compila��o.
	

	ImprimirTempo(tempoConst);
	cout << "\n";
	ImprimirTempo(tempoNaoConst);
	cout << "\n";

	system("pause");

	return 0;
}