#pragma once
class Carro
{
public:
	// Construtor e destrutor
	Carro(const char*);
	~Carro();

	// Retorno do nome
	const char *getNome() const;

	// M�todo est�tico que retorna o n�mero de objetos Carro instanciados
	static int getCount();

private:
	char *nome;

	// Quantidade de objetos Carro instanciados
	static int count;
};

