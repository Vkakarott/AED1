#ifndef NATURAIS_H
#define NATURAIS_H

typedef struct set {
    int *array;
    int size;
} Set;

int createSet(Set *set);

int setVoid(Set *set);

int insertElement(Set *set, int x);

int removeElement(Set *set, int x);

int lengthSet(Set *set);

int largestElement(Set *set, int x);

int smallestElement(Set *set, int x);

int belongs(Set *set, int x);

int equalSets(Set *set1, Set *set2);

int subset(Set *set1, Set *set2);

#endif // NATURAIS_H