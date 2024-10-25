#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha* criaPilha() {
    Pilha *pilha;
    pilha = (Pilha*) malloc(sizeof(Pilha));
    if(pilha != NULL) pilha->tamanho = 0;
    return pilha;
}

void liberaPilha(Pilha* pilha) {
    free(pilha);
}

int push(Pilha *pilha, Elemento elemento) {
    unsigned int i;
    Elemento auxiliar;

    if(pilha->tamanho == MAX) return -1;
    else {
        pilha->elementos[pilha->tamanho] = elemento;
        pilha->tamanho++;
        return 1;
    }
}

void imprimePilha(Pilha* pilha) {
    unsigned int i;

    for(i = 0; i < pilha->tamanho; i++) {
        printf("Elemento %d: %d\n", i+1, pilha->elementos[i].dado);
    }
}

Elemento pop(Pilha* pilha) {
    Elemento elemento;
    if(pilha->tamanho == 0) {
        elemento.chave = -1;
        elemento.dado = -1;
    } else {
        elemento = pilha->elementos[pilha->tamanho-1];
        pilha->tamanho--;
    }
    return elemento;
}

void invertePilha(Pilha* pilha, Pilha* pilhaInvertida) {
    int size = pilha->tamanho;
    Elemento elemento;

    for(int i = 0; i < size; i++) {
        elemento = pop(pilha);
        push(pilhaInvertida, elemento);
    }
}