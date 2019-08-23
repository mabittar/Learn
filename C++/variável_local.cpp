#include <iostream>
#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

void func1();

void func2();

int main(int argc, char *argv[])
{

int B;
B = 10; //variavel na funcao principal
cout <<"Valor de B dentro do programa: " << B <<endl;
func1();
func2();
return 0;
}

void func1()
{
	int B;
	B = -100; //variavel na funcao1
	cout <<"Valor de B na func1: " << B <<endl;
}

void func2()
{
	int B;
	B = -200; //variavel na funcao2
	cout <<"Valor de B na func1: " << B <<endl;
}
