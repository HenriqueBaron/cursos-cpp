#pragma once

/* Como o método DisplayItem possui como parâmetro um objeto (mais especificamente, um ponteiro) da classe Storage,
é preciso definir a classe Storage previamente. A inclusão do arquivo de header NÃO pode ser feita, pois como o header
de Storage já inclui este arquivo Display.h, isso geraria uma inclusão circular. */
//#include "Storage.h"
class Storage;

/* Esta classe é uma parte da demonstração de criação de uma função membro de classe como friend de outra classe.*/

class Display
{
public:
	Display(bool);

	void DisplayItem(Storage&);

private:
	bool m_displayIntFirst;
};

