#include <iostream>
#include <string>

using namespace std;

class PonteiroThis
{
public:
	PonteiroThis(int);
	void Imprimir() const;

private:
	int valor;
};

PonteiroThis::PonteiroThis(int v)
{
	valor = v;
}

void PonteiroThis::Imprimir() const
{
	/* O this no C++ � semelhante � keyword this do C#. Ela refere � inst�ncia da classe que est� executando a fun��o.
	Por conta disso, "this" s� pode ser utilizada em membros n�o-est�ticos de uma classe.*/
	// Em resumo, "this" � um ponteiro para a �rea de mem�ria onde a inst�ncia do objeto est� armazenada.
	cout << "Valor = " << valor << endl;
	cout << "Valor = " << this->valor << endl;
	cout << "Valor = " << (*this).valor << endl;
	cout << this << endl;
}

int main()
{
	/* Adicionalmente, abaixo s�o mostradas duas formas de inicializar um objeto: a primeira � no mesmo estilo do C# (mas sem
	a palavra "new". A segunda chama o construtor da classe diretamente pelo objeto instanciado.*/
	PonteiroThis p = PonteiroThis(50);
	PonteiroThis p2(40);

	p.Imprimir();
	p2.Imprimir();

	system("pause");
	return 0;
}