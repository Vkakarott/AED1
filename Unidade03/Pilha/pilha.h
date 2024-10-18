#include <stdio.h>
#include <stdlib.h>

#define SUCESSO 1
#define FALHA -1
#define CHAVE_INVALIDA 0

#define TAMANHO_MAXIMO_PILHA 100

typedef struct {
    unsigned int chave;
    unsigned int dado;
} Elemento;

typedef struct pilha {
    Elemento elementos[TAMANHO_MAXIMO_PILHA];
    unsigned int tamanho;
} Pilha;

Pilha* criaPilha();
void liberaPilha(Pilha* pilha);
int tamanhoPilha(Pilha* pilha);
int verificarVazia(Pilha* pilha);
int verificarCheia(Pilha* pilha);
int push(Pilha *pilha, Elemento elemento);
Elemento pop(Pilha *pilha);
int consultaTopo(Pilha* pilha, Elemento* elemento);
void imprimePilha(Pilha* pi);