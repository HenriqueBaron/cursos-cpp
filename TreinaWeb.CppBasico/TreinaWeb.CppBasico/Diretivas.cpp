#include <iostream>
#include <string>

// A macro "define" cria um recurso pelo qual o compilador irá substituir no código ao compilar. Perceba que uma
// macro não tem tipo. Ela é simplesmente a substituição de um texto onde ela for chamada. Fica a cargo do compilador
// definir se essa substituição funciona ou não em cada local em que a macro for chamada.
#define MSG "Mensagem da macro MSG"
#define NUM 50
#define TEST "Mensagem de teste"
#define TEST2 "Teste"
// A diretiva line altera o contador interno de linhas do código (obtido pela macro __LINE__) e opcionalmente pode também
// alterar o nome do arquivo armazenado internamente. Este nome, por sua vez, é obtido pela macro __FILE__.
#line 60 "MinhasDiretivas"  

using namespace std;

void DemonstracaoDiretivas()
{
	cout << MSG << "\n";

	// A diretiva undef desfaz a definição da diretiva define. Por exemplo, descomentando a linha que exibe com "cout", pode-se
	// perceber que o código abaixo da "indefinição" da macro MSG que a utilizar, não compilará com sucesso.
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

	// A diretiva #error provoca um erro de compilação onde é colocada.
#ifdef TEST2
	cout << "A macro NUM vale " << NUM << "\n";
#else
#error É preciso definir a macro TEST2. 
#endif // TEST2

	cout << "Linha " << __LINE__ << ", arquivo " << __FILE__ << "\n";

}