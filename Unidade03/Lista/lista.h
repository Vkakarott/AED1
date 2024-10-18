#include <stdio.h>
#include <stdlib.h>

#define SUCESSO 1
#define FALHA -1
#define CHAVE_INVALIDA 0

#define TAMANHO_MAXIMO_LISTA 100

typedef struct {
    unsigned int chave;
    unsigned int dado;
} Elemento;

typedef struct lista {
    Elemento elementos[TAMANHO_MAXIMO_LISTA];
    unsigned int tamanho;
} Lista;

Lista* criarLista();
void destruirLista(Lista* lista);
int tamanhoLista(Lista* lista);
int listaVazia(Lista* lista);
int listaCheia(Lista* lista);
int inserirInicio(Lista* lista, Elemento elemento);
int inserirMeio(Lista* lista, Elemento elemento, unsigned int posicao);
int inserirFim(Lista* lista, Elemento elemento);
Elemento* removerInicio(Lista* lista);
Elemento* removerMeio(Lista* lista, unsigned int posicao);
Elemento* removerFim(Lista* lista);
Elemento* buscarValor(Lista* lista, unsigned int valor);
Elemento* buscarChave(Lista* lista, unsigned int chave);
void imprimirLista(Lista* lista);