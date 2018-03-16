#include <iostream>

/* Como mostra este exemplo, uma fun��o pode ser friend de m�ltiplas classes e, portanto, acessar� os membros
private e protected de ambas as classes.*/

/* � preciso criar um prot�tipo da classe umidade porque a fun��o ImprimirTempo chama um objeto do tipo Umidade.*/
class Umidade;

class Temperatura
{
private:
	int m_temp;

public:
	Temperatura(int temp = 0)
	{
		m_temp = temp;
	}

	friend void ImprimirTempo(const Temperatura &temperatura, const Umidade &umidade);
};

class Umidade
{
private:
	int m_umidade;

public:
	Umidade(int umidade = 0)
	{
		m_umidade = umidade;
	}

	friend void ImprimirTempo(const Temperatura &temperatura, const Umidade &umidade);
};

void ImprimirTempo(const Temperatura & temperatura, const Umidade & umidade)
{
	std::cout << "A temperatura e " << temperatura.m_temp << " e a umidade e de " << umidade.m_umidade;
}
