#include <cstdlib>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])


{
	int x;
	
	cout<<"Informe o tamanho do vetor: ";
	cin>>x;
	
	
	int vet[x], i;
	
	
	
	cout<<"Informe "<< x <<" valores inteiros: \n";
	for(i=0; i<x; i++)
		cin>>*(vet+i);
		
		
	cout<<"Valores pares lidos: \n";
	for(i=0; i<x; i++)
	{
		if(*(vet+i)%2 == 0)
		cout<<*(vet+i)<<"\t";
		}	
	
return 0;
	
}
