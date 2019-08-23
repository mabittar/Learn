#include <iostream>
#include <conio.h>
#include <iostream>
#include <string>

using namespace std;


void soma(float a, float b); //prototipo da funcao soma, poderia ser indicado apenas os tipos dos parametros

int main(int argc, char *argv[])
{
	

	float a, b;
	
	cout << "Digite o primeiro valor a ser somado:";
	cin >> a;
	cout << "Digite o segundo valor a ser somado: ";
	cin >> b;
	
	soma (a,b); //chama a função soma - parametros reais


system("PAUSE");
	
}

//FUNCOES

void soma(float a, float b) //função soma - parametros formais
{
	float resultado;
	resultado = a + b;
	cout <<"\n A soma de " << a <<" com " << b <<" e': " <<resultado <<".\n" <<endl;
	
}

