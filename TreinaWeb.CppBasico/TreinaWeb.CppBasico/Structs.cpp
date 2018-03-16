#include<iostream>
#include<string>

using namespace std;

struct Funcionario
{
	string Nome;
	string Setor;
	int Idade;
};

void TesteStruct()
{
	struct Funcionario Estagiario = { "Marcos", "Engenharia", 21 };

	cout << Estagiario.Nome << "\n" << Estagiario.Setor << "\n" << Estagiario.Idade << "\n\n";
}