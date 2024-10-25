#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista* criarLista() {
    Lista* lista = (Lista*) malloc(sizeof(Lista));
    if (lista != NULL) {
        lista->tamanho = 0;
    }
    return lista;
}

void destruirLista(Lista* lista) {
    if (lista != NULL) {
        free(lista);
    }
}

int tamanhoLista(Lista* lista) {
    if (lista != NULL) {
        return lista->tamanho;
    }
    return FALHA;
}

int listaVazia(Lista* lista) {
    if (lista != NULL) {
        return lista->tamanho == 0;
    }
    return FALHA;
}

int listaCheia(Lista* lista) {
    if (lista != NULL) {
        return lista->tamanho == TAMANHO_MAXIMO_LISTA;
    }
    return FALHA;
}

int inserirInicio(Lista* lista, Elemento elemento) {
    if (lista != NULL && !listaCheia(lista)) {
        for (unsigned int i = lista->tamanho; i > 0; i--) {
            lista->elementos[i] = lista->elementos[i - 1];
        }
        lista->elementos[0] = elemento;
        lista->tamanho++;
        return SUCESSO;
    }
    return FALHA;
}

int inserirMeio(Lista* lista, Elemento elemento, unsigned int posicao) {
    if (lista != NULL && !listaCheia(lista) && posicao < lista->tamanho) {
        for (unsigned int i = lista->tamanho; i > posicao; i--) {
            lista->elementos[i] = lista->elementos[i - 1];
        }
        lista->elementos[posicao] = elemento;
        lista->tamanho++;
        return SUCESSO;
    }
    return FALHA;
}

int inserirFim(Lista* lista, Elemento elemento) {
    if (lista != NULL && !listaCheia(lista)) {
        lista->elementos[lista->tamanho] = elemento;
        lista->tamanho++;
        return SUCESSO;
    }
    return FALHA;
}

Elemento* removerInicio(Lista* lista) {
    if (lista != NULL && !listaVazia(lista)) {
        Elemento* elemento = (Elemento*) malloc(sizeof(Elemento));
        if (elemento != NULL) {
            *elemento = lista->elementos[0];
            for (unsigned int i = 0; i < lista->tamanho - 1; i++) {
                lista->elementos[i] = lista->elementos[i + 1];
            }
            lista->tamanho--;
        }
        return elemento;
    }
    return NULL;
}

Elemento* removerMeio(Lista* lista, unsigned int posicao) {
    if (lista != NULL && !listaVazia(lista) && posicao < lista->tamanho) {
        Elemento* elemento = (Elemento*) malloc(sizeof(Elemento));
        if (elemento != NULL) {
            *elemento = lista->elementos[posicao];
            for (unsigned int i = posicao; i < lista->tamanho - 1; i++) {
                lista->elementos[i] = lista->elementos[i + 1];
            }
            lista->tamanho--;
        }
        return elemento;
    }
    return NULL;
}

Elemento* removerFim(Lista* lista) {
    if (lista != NULL && !listaVazia(lista)) {
        Elemento* elemento = (Elemento*) malloc(sizeof(Elemento));
        if (elemento != NULL) {
            *elemento = lista->elementos[lista->tamanho - 1];
            lista->tamanho--;
        }
        return elemento;
    }
    return NULL;
}

Elemento* buscarValor(Lista* lista, unsigned int valor) {
    if (lista != NULL) {
        for (unsigned int i = 0; i < lista->tamanho; i++) {
            if (lista->elementos[i].dado == valor) {
                Elemento* elemento = (Elemento*) malloc(sizeof(Elemento));
                if (elemento != NULL) {
                    *elemento = lista->elementos[i];
                }
                return elemento;
            }
        }
    }
    return NULL;
}

Elemento* buscarChave(Lista* lista, unsigned int chave) {
    if (lista != NULL) {
        for (unsigned int i = 0; i < lista->tamanho; i++) {
            if (lista->elementos[i].chave == chave) {
                Elemento* elemento = (Elemento*) malloc(sizeof(Elemento));
                if (elemento != NULL) {
                    *elemento = lista->elementos[i];
                }
                return elemento;
            }
        }
    }
    return NULL;
}

void imprimirLista(Lista* lista) {
    if (lista != NULL) {
        for (unsigned int i = 0; i < lista->tamanho; i++) {
            printf("Elemento[%d]: chave=%d, dado=%d\n", i, lista->elementos[i].chave, lista->elementos[i].dado);
        }
    }
}