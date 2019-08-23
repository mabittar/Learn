#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

//definição da função ENTER
void EsperaEnter()
{
	int tecla;
	cout <<"Para continuar, pressione ENTER\n";
	
	do
	{
		tecla = getch();
		if (tecla != 13) //se não for enter
		{
			cout<<"\a\a\a"; //msg sonora
		}
	} while (tecla!=13); //13 é o codigo ASCII para ENTER
	
}

int main()
{
	cout <<"Processamento 1:...\n";
	EsperaEnter()	; //chama função
	cout <<"Processamento 2:...\n";
	EsperaEnter()	; //chama função	
	cout <<"Processamento 3:...\n";
	EsperaEnter()	; //chama função	
	return 0;
}
