#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
    printf("Criando pilha...\n");
    Pilha *pilha = criaPilha();
    printf("Pilha criada!\n");

    printf("Verificando se a pilha está vazia...\n");
    if(verificarVazia(pilha)) printf("A pilha está vazia!\n");
    else printf("A pilha não está vazia!\n");

    printf("Verificando se a pilha está cheia...\n");
    if(verificarCheia(pilha)) printf("A pilha está cheia!\n");
    else printf("A pilha não está cheia!\n");

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
    printf("Elementos inseridos!\n");

    printf("Verificando se a pilha está vazia...\n");
    if(verificarVazia(pilha)) printf("A pilha está vazia!\n");
    else printf("A pilha não está vazia!\n");

    printf("Verificando se a pilha está cheia...\n");
    if(verificarCheia(pilha)) printf("A pilha está cheia!\n");
    else printf("A pilha não está cheia!\n");

    printf("Consultando o topo da pilha...\n");

    Elemento topo;
    consultaTopo(pilha, &topo);
    printf("Topo da pilha: chave = %d, dado = %d\n", topo.chave, topo.dado);

    printf("Removendo elementos da pilha...\n");
    Elemento elementoRemovido;
    elementoRemovido = pop(pilha);
    printf("Elemento removido: chave = %d, dado = %d\n", elementoRemovido.chave, elementoRemovido.dado);
    elementoRemovido = pop(pilha);
    printf("Elemento removido: chave = %d, dado = %d\n", elementoRemovido.chave, elementoRemovido.dado);
    elementoRemovido = pop(pilha);
    printf("Elemento removido: chave = %d, dado = %d\n", elementoRemovido.chave, elementoRemovido.dado);
    printf("Elementos removidos!\n");

    printf("Verificando se a pilha está vazia...\n");
    if(verificarVazia(pilha)) printf("A pilha está vazia!\n");
    else printf("A pilha não está vazia!\n");

    printf("Verificando se a pilha está cheia...\n");
    if(verificarCheia(pilha)) printf("A pilha está cheia!\n");
    else printf("A pilha não está cheia!\n");

    printf("Liberando pilha...\n");
    liberaPilha(pilha);
    printf("Pilha liberada!\n");

    return 0;
}