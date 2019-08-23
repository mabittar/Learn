#include <cstdlib>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])


{

int vet[10], i, *prtVet; //usa-se o operador de derreferência (*) para acessar o conteúdo de uma posição de memória, cujo endereço está armazenado em um ponteiro, 
prtVet = &vet[0]; // prtVet recebe o endereço do primeiro elemento de Vet
cout <<"Informe 10 numeros inteiros: \n";
for(i=0; i<10;i++)
	cin>>*prtVet++; // os endereços apontados por prtVet são modificados pelo operador incremental (++)
	
prtVet = &vet[0]; // prtVet volta a apontar para o primeiro elemento de vet
cout <<"Valores pares do vetor lido: \n";
for (i=0;i<10;i++)
	{
		if(*prtVet%2 == 0)
			cout<<*prtVet<<"\t";
			prtVet++; //os endereços apontados por prtVet são novamente modificados como no laço anterior

	}

prtVet = NULL; //prtVet recebe NULL para evitar problemas de gerenciamento de memória

return 0;


}
