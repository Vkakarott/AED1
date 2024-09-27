#include <stdio.h>
#include <stdlib.h>
#include "naturais.h"

// Algumas funcoes nao foram usadas, mas foram implementadas para fins de aprendizado

int main() {
    Set *set;
    int start = 10;
    int temp;

    createSet(set);
    printf("Conjunto criado com sucesso!\n");

    do {
        if(setVoid(set)) printf("Conjunto Vazio!\n");

        switch (start){
        case 1:
            printf("\nDigite o elemento a ser inserido: ");
            scanf("%d", &temp);
            if (insertElement(set, temp)) printf("Elemento %d inserido com sucesso!\n", temp);
            else printf("Conjunto cheio!\n");
            break;

        case 2:
            printf("\nDigite o elemento a ser removido: ");
            scanf("%d", &temp);
            if (removeElement(set, temp)) printf("Elemento %d removido com sucesso!\n", temp);
            else printf("Elemento %d nao encontrado!\n", temp);
            break;

        case 3:
            printf("\nTamanho do conjunto: %d\n", lengthSet(set));
            break;

        case 4:
            printf("\nDigite o valor de referencia: ");
            scanf("%d", &temp);
            printf("Elementos maiores que %d: %d\n", temp, largestElement(set, temp));
            break;

        case 5:
            printf("Digite o valor de referencia: ");
            scanf("%d", &temp);
            printf("\nElementos menores que %d: %d\n", temp, smallestElement(set, temp));
            break;
        
        default:
            break;
        }

        if (setVoid(set)) printf("Conjunto = { }\n");
        else {
            printf("=====================================\n");
            printf("Conjunto = { ");
            for (int i = 0; i < lengthSet(set); i++) {
                printf("%d ", set->array[i]);
            }
            printf("}\n");
        }

        printf("=====================================\n");

        printf("\nMenu:\n[1]Incluir elemnto\n[2]Remover elemento\n[3]Tamanho do conjunto\n[4]Maior elemento\n[5]Menor elemento\n[0]Sair\n");

        scanf("%d", &start);
    } while (start);
    
    return 0;
}