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
	/* O this no C++ é semelhante à keyword this do C#. Ela refere à instância da classe que está executando a função.
	Por conta disso, "this" só pode ser utilizada em membros não-estáticos de uma classe.*/
	// Em resumo, "this" é um ponteiro para a área de memória onde a instância do objeto está armazenada.
	cout << "Valor = " << valor << endl;
	cout << "Valor = " << this->valor << endl;
	cout << "Valor = " << (*this).valor << endl;
	cout << this << endl;
}

int main()
{
	/* Adicionalmente, abaixo são mostradas duas formas de inicializar um objeto: a primeira é no mesmo estilo do C# (mas sem
	a palavra "new". A segunda chama o construtor da classe diretamente pelo objeto instanciado.*/
	PonteiroThis p = PonteiroThis(50);
	PonteiroThis p2(40);

	p.Imprimir();
	p2.Imprimir();

	system("pause");
	return 0;
}