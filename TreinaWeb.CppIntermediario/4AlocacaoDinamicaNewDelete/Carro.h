#pragma once
class Carro
{
public:
	// Construtor e destrutor
	Carro(const char*);
	~Carro();

	// Retorno do nome
	const char *getNome() const;

	// Método estático que retorna o número de objetos Carro instanciados
	static int getCount();

private:
	char *nome;

	// Quantidade de objetos Carro instanciados
	static int count;
};

