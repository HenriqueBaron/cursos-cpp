#include <iostream>

using namespace std;

/* O uso da keyword friend permite a uma função ou a uma classe acessar dados protegidos e privados de uma outra classe.
Deve-se evitar ao máximo o uso de funções ou classes friend, já que elas abrem uma brecha nos princípios de encapsulamento.*/
class Valor
{
private:
	int x;
	int y;

public:
	Valor()
	{
		x = 0;
		y = 0;
	}

	void Imprimir() const
	{
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
		cout << "Resultado = " << x + y << endl;
	}

	friend void SetVal(Valor &, int, int); // É definido o protótipo da função friend
};

void SetVal(Valor &valor, int novoX, int novoY)
{
	// A função friend pode acessar dados privados e protegidos da classe.
	valor.x = novoX;
	valor.y = novoY;
}

int main()
{

}