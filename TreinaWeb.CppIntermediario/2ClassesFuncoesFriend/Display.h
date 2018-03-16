#pragma once

/* Como o m�todo DisplayItem possui como par�metro um objeto (mais especificamente, um ponteiro) da classe Storage,
� preciso definir a classe Storage previamente. A inclus�o do arquivo de header N�O pode ser feita, pois como o header
de Storage j� inclui este arquivo Display.h, isso geraria uma inclus�o circular. */
//#include "Storage.h"
class Storage;

/* Esta classe � uma parte da demonstra��o de cria��o de uma fun��o membro de classe como friend de outra classe.*/

class Display
{
public:
	Display(bool);

	void DisplayItem(Storage&);

private:
	bool m_displayIntFirst;
};

