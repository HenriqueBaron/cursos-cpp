#pragma once
class Tempo
{
public:
	Tempo(int = 0, int = 0);

	// Acessores de escrita
	void SetTempo(int, int);
	void SetHora(int);
	void SetMinuto(int);
	void SetTeste(int, int) const;

	// Acessores de leitura
	int GetHora() const;
	int GetMinuto();

	// Método de impressão
	void Impressao() const;

	int hora;
	int minuto;
};

