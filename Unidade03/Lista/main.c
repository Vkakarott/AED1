#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main() {
    Lista* lista = criarLista();
    Elemento elemento;
    elemento.chave = 1;
    elemento.dado = 10;
    inserirInicio(lista, elemento);
    elemento.chave = 2;
    elemento.dado = 20;
    inserirInicio(lista, elemento);
    elemento.chave = 3;
    elemento.dado = 30;
    inserirInicio(lista, elemento);
    imprimirLista(lista);
    destruirLista(lista);
    return 0;
}