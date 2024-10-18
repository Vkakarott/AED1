#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila* criarFila() {
    Fila* fila = (Fila*) malloc(sizeof(Fila));
    if (fila != NULL) {
        fila->tamanho = 0;
        fila->inicio = 0;
        fila->fim = 0;
    }
    return fila;
}

void destruirFila(Fila* fila) {
    free(fila);
}

int tamanhoFila(Fila* fila) {
    return fila->tamanho;
}

int filaVazia(Fila* fila) {
    return fila->tamanho == 0;
}

int filaCheia(Fila* fila) {
    return fila->tamanho == TAMANHO_MAXIMO_FILA;
}  

int push(Fila* fila, Elemento elemento) {
    if (filaCheia(fila)) {
        return FALHA;
    }
    fila->elementos[fila->fim] = elemento;
    fila->fim = (fila->fim + 1) % TAMANHO_MAXIMO_FILA;
    fila->tamanho++;
    return SUCESSO;
}

Elemento* pop(Fila* fila) {
    if (filaVazia(fila)) {
        return NULL;
    }
    Elemento* elemento = &fila->elementos[fila->inicio];
    fila->inicio = (fila->inicio + 1) % TAMANHO_MAXIMO_FILA;
    fila->tamanho--;
    return elemento;
}

Elemento* front(Fila* fila) {
    if (filaVazia(fila)) {
        return NULL;
    }
    return &fila->elementos[fila->inicio];
}

void imprimirFila(Fila* fila) {
    if (filaVazia(fila)) {
        printf("Fila vazia.\n");
        return;
    }
    printf("Fila: ");
    for (unsigned int i = fila->inicio; i != fila->fim; i = (i + 1) % TAMANHO_MAXIMO_FILA) {
        printf("%u ", fila->elementos[i].dado);
    }
    printf("\n");
}