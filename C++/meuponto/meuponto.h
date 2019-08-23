//TAD: Ponto (x,y)

//Tipo Exportado
typedef struct ponto Ponto;

// Funções exportadas

Ponto* pto_cria (float x, float y); // aloca e retorna um ponto com coordenadas (x,y)
void pto_libera (Ponto* p); //Libera a memória alocada
void pto_acessa (Ponto* p, float *x, float *y); //retorna os valores das coordenadas de um ponto
void pto_atribui (Ponto* p, float x, float y); //atribui valores às coordenadas de um ponto
float pto_distancia(Ponto* p1, Ponto* p2); //calcula e retorna a distância entre dois pontos
