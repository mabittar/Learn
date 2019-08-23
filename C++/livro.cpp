//exemplo de struct dentro de struct e como chamar
#include <stdio.h>
#include <stdlib.h>

struct data
{
	int mes;
	int ano;

};

struct livro
{
	char nome [50];
	char autor [50];
	struct data data_pub;
	
};

int main () {

	struct livro l1 ={"Primo Basilio", "Eca Queiroz"};
	l1.data_pub.ano = {1878};

	struct livro l2 = {"Dom Casmurro", "Machado de Assis"};
	l2.data_pub.ano = {1899};

	printf("Livro 1: %s \t Autor: %s  \t Ano: %d \n", l1.nome, l1.autor, l1.data_pub.ano);
	printf("Livro 2: %s \t Autor: %s \t Ano : %d \n", l2.nome, l2.autor, l2.data_pub.ano);

return 0;

}