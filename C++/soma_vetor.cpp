//programa para ler lista de inteiros, armazenar num vetor e retornar a soma do itens do vetor

#include <iostream>
using namespace std;

int somaVet (int *ptrVet, int tam); //prototipo da função

int main()
{
int tam; 
int *vet=NULL;


cout<<"Digite o tamanho do vetor: \n";
cin>>tam;
vet=new int [tam];
if (vet !=NULL)
{
	cout<<"Digite os numero a serem somados: \n";
	for (int i=0;i<tam;i++)
	cin>>vet[i];

	cout<<"A soma dos inteiros no vetor eh: " << somaVet(vet,tam);
}
delete []vet;

return 0;
}


int somaVet (int *ptrVet, int tam) //função somaVet
{
	int soma=0;
	for (int i=0;i<tam;i++)
		//soma = soma + ptrVet[i];
		soma += ptrVet[i];
	return soma;
}
