#include <stdio.h>
#include <stdlib.h>

#define SUCESSO 1
#define FALHA -1
#define CHAVE_INVALIDA 0

#define TAMANHO_MAXIMO_FILA 100

typedef struct {
    unsigned int chave;
    unsigned int dado;
} Elemento;

typedef struct fila {
    Elemento elementos[TAMANHO_MAXIMO_FILA];
    unsigned int tamanho;
    unsigned int inicio;
    unsigned int fim;
} Fila;

Fila* criarFila();
void destruirFila(Fila* fila);
int tamanhoFila(Fila* fila);
int filaVazia(Fila* fila);
int filaCheia(Fila* fila);
int push(Fila* fila, Elemento elemento);
Elemento* pop(Fila* fila);
Elemento* front(Fila* fila);
void imprimirFila(Fila* fila);