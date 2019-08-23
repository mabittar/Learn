#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int x;

void parimpar(int); //prototipo da funcao parouimpar, indicado apenas o tipo do parametro


int main(int argc, char *argv[])
{
	cout<<" Favor digitar o numero para availiar se e' par ou impar: ";
	cin >> x;
	parimpar(x);

	system("PAUSE");
	
}

//FUNCOES

void parimpar(int) //função parimpar - parametros formais
{
	if (x % 2 == 0) //se a divisao por 2 retornar resto 0 eh par!
			{
				cout <<"O numero e' par!" <<endl;
			}
		else
			{
				cout <<"O mumero e' impar!" <<endl;
			}
}
