#include <iostream>

using namespace std;

/* O uso da keyword friend permite a uma fun��o ou a uma classe acessar dados protegidos e privados de uma outra classe.
Deve-se evitar ao m�ximo o uso de fun��es ou classes friend, j� que elas abrem uma brecha nos princ�pios de encapsulamento.*/
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

	friend void SetVal(Valor &, int, int); // � definido o prot�tipo da fun��o friend
};

void SetVal(Valor &valor, int novoX, int novoY)
{
	// A fun��o friend pode acessar dados privados e protegidos da classe.
	valor.x = novoX;
	valor.y = novoY;
}

int main()
{

}