#include<iostream>
#include<string>

using namespace std;

class Funcionario
{
public:
	string Nome;
	int Idade;
	int Id;
};

/* O atributo de visibilidade antes do nome da classe-pai indica se o conteúdo (variáveis, métodos etc.) herdados da classe
serão visíveis para aqueles que instanciarem um objeto da classe filha. */
class Analista :public Funcionario
{
public:
	string Setor;
	string Login;
	string Senha;
};

class Desenvolvedor
{
public:
	int LinguagensProgramacao;
};

class AnalistaTi :public Analista
{
	string UsuarioServidor;
};

// Classe com herança múltipla
class AnalistaSoftware :public Analista, public Desenvolvedor
{
private:
	int meuCampo;
public:
	string IDEPreferida;

	AnalistaSoftware()
	{
		cout << "Este é o construtor do objeto AnalistaSoftware";
	}

	~AnalistaSoftware()
	{
		cout << "Este é o destrutor do objeto AnalistaSoftware";
	}
};

void DemonstracaoOOP()
{
	Analista teste;

	teste.Setor = "Vendas";
	teste.Idade = 25;

	AnalistaSoftware anSoftware;
	anSoftware.Senha = "123";
	anSoftware.LinguagensProgramacao = 3;
	anSoftware.IDEPreferida = "MS Visual Studio";

}