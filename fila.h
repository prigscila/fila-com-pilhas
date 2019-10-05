#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

typedef struct Fila{
    int M;
    int f;
    int r;
    int tamanho;
    int* dados;
}Fila;

// cria uma fila com tamanho definido
Fila* criar_fila(int tamanho);
// destroi a fila
void destruir_fila(Fila* f);
// insere na cauda da fila
void inserir(Fila* f, int x);
// remove cabeca da fila
int remover(Fila* f);
// retorna o tamanho da fila (numero de elementos inseridos)
int tamanho(Fila* f);

#endif // FILA_H_INCLUDED
