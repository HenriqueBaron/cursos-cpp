#include <iostream>

/* Como mostra este exemplo, uma função pode ser friend de múltiplas classes e, portanto, acessará os membros
private e protected de ambas as classes.*/

/* É preciso criar um protótipo da classe umidade porque a função ImprimirTempo chama um objeto do tipo Umidade.*/
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
