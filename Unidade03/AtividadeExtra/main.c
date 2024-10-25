#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main() {
    Pilha *pilha = criaPilha();
    Pilha *pilhaInvertida = criaPilha();

    printf("Inserindo elementos na pilha...\n");
    Elemento elemento;
    elemento.chave = 1;
    elemento.dado = 10;
    push(pilha, elemento);
    elemento.chave = 2;
    elemento.dado = 20;
    push(pilha, elemento);
    elemento.chave = 3;
    elemento.dado = 30;
    push(pilha, elemento);
    elemento.chave = 4;
    elemento.dado = 40;
    push(pilha, elemento);
    elemento.chave = 5;
    elemento.dado = 50;
    push(pilha, elemento);
    printf("Elementos inseridos!\n");

    printf("Pilha 1:\n");
    imprimePilha(pilha);
    
    invertePilha(pilha, pilhaInvertida);
    printf("Pilha 2:\n");
    imprimePilha(pilhaInvertida);

    liberaPilha(pilha);
    liberaPilha(pilhaInvertida);

    return 0;
}