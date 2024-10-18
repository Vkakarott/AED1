#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(){
    Fila* fila = criarFila();
    Elemento elemento;
    Elemento* elementoRetirado;
    int i;

    for (i = 0; i < 10; i++) {
        elemento.chave = i;
        elemento.dado = i * 10;
        push(fila, elemento);
    }

    imprimirFila(fila);

    elementoRetirado = pop(fila);
    if (elementoRetirado != NULL) {
        printf("Elemento retirado: chave = %d, dado = %d\n", elementoRetirado->chave, elementoRetirado->dado);
    }

    imprimirFila(fila);

    elementoRetirado = front(fila);
    if (elementoRetirado != NULL) {
        printf("Elemento da frente: chave = %d, dado = %d\n", elementoRetirado->chave, elementoRetirado->dado);
    }

    imprimirFila(fila);

    destruirFila(fila);

    return 0;
}