#include <stdio.h>
#include <stdlib.h>

#define eh_par( x )      ( ( x % 2 ) ? 0 : 1 ) //outra forma para fazer

int x;

int main(int argc, char *argv[])
{
	cout<<" Favor digitar o numero para availiar se e' par ou impar: ";
	cin >> x;

	printf("%d eh um numero %s\n", x, eh_par(x)?"PAR":"IMPAR" );	//outra forma para fazer
	
	system("PAUSE");
	
}


