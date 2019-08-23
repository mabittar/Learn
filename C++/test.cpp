#include <iostream>
using namespace std;

int maiorDeTres(int,int,int);
int main(){

	int a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
	cout<<maiorDeTres(a,b,c);
	return 0;
}

int maiorDeTres(int a, int b, int c){
	int maior;
	
	maior = a;
	if (b>maior){
		maior = b;
	}
	if (c>maior){
		maior = c;
	}
	return maior;
}
