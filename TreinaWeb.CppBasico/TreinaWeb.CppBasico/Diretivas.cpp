#include <iostream>
#include <string>

// A macro "define" cria um recurso pelo qual o compilador ir� substituir no c�digo ao compilar. Perceba que uma
// macro n�o tem tipo. Ela � simplesmente a substitui��o de um texto onde ela for chamada. Fica a cargo do compilador
// definir se essa substitui��o funciona ou n�o em cada local em que a macro for chamada.
#define MSG "Mensagem da macro MSG"
#define NUM 50
#define TEST "Mensagem de teste"
#define TEST2 "Teste"
// A diretiva line altera o contador interno de linhas do c�digo (obtido pela macro __LINE__) e opcionalmente pode tamb�m
// alterar o nome do arquivo armazenado internamente. Este nome, por sua vez, � obtido pela macro __FILE__.
#line 60 "MinhasDiretivas"  

using namespace std;

void DemonstracaoDiretivas()
{
	cout << MSG << "\n";

	// A diretiva undef desfaz a defini��o da diretiva define. Por exemplo, descomentando a linha que exibe com "cout", pode-se
	// perceber que o c�digo abaixo da "indefini��o" da macro MSG que a utilizar, n�o compilar� com sucesso.
#undef MSG
	//cout << MSG;


	// Diretiva condicional:
#if NUM == 100
	cout << "O numero " << NUM << " escreve-se cem.\n";
#elif NUM == 50
	cout << "O numero " << NUM << " escreve-se cinquenta.\n";
#else
	cout << "Nao sei escrever o numero " << NUM << "\n";
#endif

	// Diretiva condicional de macro:
#ifndef TEST
	cout << "A macro TEST nao foi definida.\n";
#else
	cout << "O conteudo da macro TEST eh " << TEST << "\n";
#endif // MSG

	// A diretiva #error provoca um erro de compila��o onde � colocada.
#ifdef TEST2
	cout << "A macro NUM vale " << NUM << "\n";
#else
#error � preciso definir a macro TEST2. 
#endif // TEST2

	cout << "Linha " << __LINE__ << ", arquivo " << __FILE__ << "\n";

}