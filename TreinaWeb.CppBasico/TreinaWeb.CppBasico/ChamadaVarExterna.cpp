#include<iostream>

using namespace std;

extern int var_externa;
void Mensagem()
{
	cout << "A variavel externa tem o valor " << var_externa << "\n";
}
