#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    unsigned int chave;
    unsigned int dado;
} Elemento;

typedef struct {
    Elemento elementos[MAX];
    unsigned int tamanho;
    unsigned int topo;
} Pilha;

Pilha* criaPilha();
void liberaPilha(Pilha* pilha);
int push(Pilha* pilha, Elemento elemento);
void imprimePilha(Pilha* pilha);
Elemento pop(Pilha* pilha);
void invertePilha(Pilha* pilha, Pilha* pilhaInvertida);