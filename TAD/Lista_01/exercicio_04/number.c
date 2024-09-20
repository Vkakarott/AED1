#include <stdio.h>
#include <stdlib.h>
#include "number.h"

struct complex {
    double real;
    double imaginary;
};

ComplexNumber* createComplexNumber(double real, double imaginary) {
    ComplexNumber* number = (struct complex*) malloc(sizeof(struct complex));
    number->real = real;
    number->imaginary = imaginary;
    return number;
}

void destroyComplexNumber(struct complex* number) {
    free(number);
}

double sumComplexNumbers(struct complex* number1, struct complex* number2) {
    return number1->real + number2->real + number1->imaginary + number2->imaginary;
}

double subtractComplexNumbers(struct complex* number1, struct complex* number2) {
    return number1->real - number2->real - number1->imaginary - number2->imaginary;
}

double multiplyComplexNumbers(struct complex* number1, struct complex* number2) {
    return number1->real * number2->real - number1->imaginary * number2->imaginary;
}