#include<iostream>
using namespace std;

int main()
{
	int vet[10], i;
	cout<<"informe 10 numeros inteiros;\n";
	for(i=0;i<10;i++)
	cin>>*(vet+1);
	
	cout<<"Valores pares do vetor lido;\n";
	for(i=0;i<10;i++)
	{
		if(*(vet+i)%2==0)
		cout<<*(vet+i)<<"\t";
	}
	return 0;
}
