#include <iostream>
using namespace std;

typedef struct
{
		int numero;
		float saldo;
}CONTA;


int main()
{
	int tam;
	CONTA *ptrConta = NULL;
	cout<<"Informe o numero de contas correntes: \n";
	cin>>tam;
	ptrConta = new CONTA [tam];
	
	if(ptrConta==NULL)
		cout<<"Memoria Insuficiente!\n";
	else
	{
		cout<<"Informe os dados (numero e saldo) das contas: \n";
		for(int i=0;i<tam;i++)
		cin>>ptrConta[i].numero>>ptrConta[i].saldo;
		
		cout<<"Contas informadas: \n";
		for (int i=0;i<tam;i++)
			cout<<"numero: "<<ptrConta[i].numero<<"\n"<<" saldo: "<<ptrConta[i].saldo<<"\n\n";
			
	}

delete [] ptrConta;
return 0;
}
