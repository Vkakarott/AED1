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

int tamanhoPilha(Pilha* pilha) {
    if(pilha == NULL) return FALHA;
    else return pilha->tamanho;
}

int verificarVazia(Pilha* pilha) {
    if(pilha == NULL) return FALHA;
    else return (pilha->tamanho == 0);
}

int verificarCheia(Pilha* pilha) {
    if(pilha == NULL) return FALHA;
    else return (pilha->tamanho == TAMANHO_MAXIMO_PILHA);
}

int push(Pilha *pilha, Elemento elemento) {
    unsigned int i;
    Elemento auxiliar;

    if(pilha->tamanho == TAMANHO_MAXIMO_PILHA) return FALHA;
    else {
        pilha->elementos[pilha->tamanho] = elemento;
        pilha->tamanho++;
        return SUCESSO;
    }
}

Elemento pop(Pilha *pilha) {
    unsigned int i;
    Elemento elementoResultado;

    if(pilha->tamanho == 0) {
        elementoResultado.chave = CHAVE_INVALIDA;
        return elementoResultado;
    } else {
        elementoResultado = pilha->elementos[((pilha->tamanho) - 1)];
        pilha->tamanho--;
        return elementoResultado;
    }
}

int consultaTopo(Pilha* pilha, Elemento* elemento) {
    if(pilha->tamanho == 0) return FALHA;
    else {
        *elemento = pilha->elementos[((pilha->tamanho) - 1)];
        return SUCESSO;
    }
}

void imprimePilha(Pilha* pilha) {
    unsigned int i;

    if(pilha == NULL) return;
    for(i = 0; i < pilha->tamanho; i++) {
        printf("Elemento %d: chave = %d, dado = %d\n", i, pilha->elementos[i].chave, pilha->elementos[i].dado);
    }
}