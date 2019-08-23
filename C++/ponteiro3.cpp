#include <cstdlib>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


using namespace std;

typedef  struct Conta
	{
		int numero;
		float saldo;
	} CONTA;

int main()
{

CONTA conta1;
Conta *ptrConta;
ptrConta = &conta1;
  
  
cout <<"Digite o número da conta: ";
cin>>ptrConta->	numero;
cout <<"Digite o saldo em R$: ";
cin>>ptrConta->saldo;



cout<<"numero: "<<ptrConta->numero<<"\n";
cout<<"saldo: R$ "<<ptrConta->saldo<<"\n";

return 0;

}
