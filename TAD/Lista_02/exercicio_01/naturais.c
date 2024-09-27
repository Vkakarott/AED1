#include <stdio.h>
#include <stdlib.h>
#include "naturais.h"

int createSet(Set *set) {
    set->array = (int *) malloc(100 * sizeof(int));
    if (set->array == NULL) return 0;
    set->size = 0;
    return 1;
}

int setVoid(Set *set) {
    if (set->size == 0) return 1;
    return 0;
}

int insertElement(Set *set, int x) {
    if (set->size == 100) return 0;
    for (int i = 0; i < set->size; i++) {
        if (set->array[i] == x) return 0;
    }
    set->array[set->size] = x;
    set->size++;
    return 1;
}

int removeElement(Set *set, int x) {
    int i, j;
    for (i = 0; i < set->size; i++) {
        if (set->array[i] == x) {
            for (j = i; j < set->size - 1; j++) {
                set->array[j] = set->array[j + 1];
            }
            set->size--;
            return 1;
        }
    }
    return 0;
}

int lengthSet(Set *set) {
    return set->size;
}

int largestElement(Set *set, int x) {
    int maior = 0;
    for (int i = 1; i < set->size; i++) {
        if (set->array[i] > x) {
            maior++;
        }
    }
    return maior;
}

int smallestElement(Set *set, int x) {
    int menor;
    for (int i = 1; i < set->size; i++) {
        if (set->array[i] < x) {
            menor++;
        }
    }
    return menor;
}

int belongs(Set *set, int x) {
    int i;
    for (i = 0; i < set->size; i++) {
        if (set->array[i] == x) return 1;
    }
    return 0;
}

int equalSets(Set *set1, Set *set2) {
    int i, j;
    if (set1->size != set2->size) return 0;
    for (i = 0; i < set1->size; i++) {
        for (j = 0; j < set2->size; j++) {
            if (set1->array[i] == set2->array[j]) break;
        }
        if (j == set2->size) return 0;
    }
    return 1;
}

int subset(Set *set1, Set *set2) {
    int i, j;
    for (i = 0; i < set1->size; i++) {
        for (j = 0; j < set2->size; j++) {
            if (set1->array[i] == set2->array[j]) break;
        }
        if (j == set2->size) return 0;
    }
    return 1;
}

