#include <cstdlib>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()

{

	struct pessoa
	{
		char nome[20];
		int idade, altura, peso;
	};

pessoa func = {"Luiz Pedro", 47, 182, 85};
pessoa *ptr;

ptr = &func;

cout<<"nome: "<<ptr->nome<<"\n";
cout<<"idade: "<<ptr->idade<<"\n";
cout<<"altura: "<<ptr->altura<<"\n";
cout<<"peso: "<<ptr->peso<<"\n";

return 0;


}
