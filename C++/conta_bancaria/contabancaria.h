// definição do tipo
typedef struct {
int numero;
double saldo;
} contabancaria;

//prototipo funções

void Inicializa (contabancaria *, int, double);
void Deposito (contabancaria *, double);
void Saque (contabancaria *, double);
void Imprime (contabancaria);

