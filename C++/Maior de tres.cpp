#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int maiordetres(int,int,int);

int a,b,c,i;

int main(int argc, char *argv[])
{
	cout <<"\n Digite o primeiro valor: "	;
	cin >>a;
	cout <<"\n Digite o segundo valor: "	;
	cin >>b;
	cout <<"\n Digite o terceiro valor: "	;
	cin >>c;
	
	maiordetres(a,b,c);
	
	cout <<"O maior valor eh: " << i << "!" <<endl;

system("PAUSE");	
}


int maiordetres(int,int,int)
{
	if (a > b) //compara o primeiro e segundo valores
		i = a; //se o maior valor for o primeiro
	
	else 
		i = b; //se o maior valor for o segundo
		
	if (i < c) //compara o maior com o terceiro 
	 i = c;
	
}
