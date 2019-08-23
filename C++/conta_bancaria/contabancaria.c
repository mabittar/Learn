#include<stdio.h>
#include"contabancaria.h"
void Inicializa(contabancaria *conta, int numero, double saldo) {
conta->numero = numero;
conta->saldo = saldo;
}
void Deposito (contabancaria *conta, double valor) {
	conta->saldo += valor;
}
void Saque (contabancaria *conta, double valor) {
conta->saldo -= valor;
}
void Imprime (contabancaria conta) {
printf("Numero: %d\n", conta.numero);
printf("Saldo: %f\n", conta.saldo);
}