#include <iostream>
using namespace std;
int main()
{
	int tam, i;
int *meuArray;
cout<<"Quantos elementos tem o array?\n";
cin>>tam;
meuArray = new int[tam];
for (i=0; i<tam;i++)
meuArray[i]=i+1;

for(i=0; i<tam;i++)
	if (i< tam-1)
	cout<<meuArray[i]<<"\t";
	
	else
	cout<<meuArray[i]<<"\n";

system("pause");
return 0;
}
