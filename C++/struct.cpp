#include <stdio.h>
#include <string.h>
using namespace std;
struct Aluno {
		char nome[50];
		int matricula;
		char conceito;
			};

int main() {
	struct Aluno al, aux;
	strcpy(al.nome, "Pedro");
	al.matricula = 200712;
	al.conceito = 'A';
	aux = al;
	printf("%s", aux.nome);
	return(0);
}