
#include <iostream>
using namespace std;



void trocaValor (float x, float y); //index função trocaValor

void trocaReferencia (float *x,float *y ); //função trocaReferência de ponteiros

int main()
{

float a,b;

a= 10.0;
b= 20.0;

cout <<"Valor de A= "<<a<<"\tValor de B= "<<b<<"\n";
trocaValor(a,b); //chama função trocaValor
cout <<"Valor de A= "<<a<<"\tValor de B= "<<b<<"\n";
trocaReferencia(&a,&b); //chama função trocaReferencia
cout <<"Valor de A= "<<a<<"\tValor de B= "<<b<<"\n";
return 0;

}


void trocaValor (float x, float y) //descrimina função trocaValor
{
	float aux;
	aux = x;
	x=y;
	y=aux;
	cout <<"Valor de X= "<<x<<"\tValor de Y= "<<y<<"\n";
	
}

void trocaReferencia (float *x, float *y) //descrimina função trocaReferencia
{
	float aux;
	aux=*x;
	*x=*y;
	*y=aux;
	cout <<"Valor de X= "<<*x<<"\tValor de Y= "<<*y<<"\n";
}
