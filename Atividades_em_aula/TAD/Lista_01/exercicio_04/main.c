#include <stdio.h>
#include <stdlib.h>
#include "number.h"

int main() {
    double real, imaginary;
    ComplexNumber *number1, *number2;

    printf("Digite a parte real do numero 1: ");
    scanf("%lf", &real);
    printf("Digite a parte imaginaria do numero 1: ");
    scanf("%lf", &imaginary);
    number1 = createComplexNumber(real, imaginary);

    printf("Digite a parte real do numero 2: ");
    scanf("%lf", &real);
    printf("Digite a parte imaginaria do numero 2: ");
    scanf("%lf", &imaginary);
    number2 = createComplexNumber(real, imaginary);

    printf("Soma dos numeros: %.2lf\n", sumComplexNumbers(number1, number2));

    printf("Subtracao dos numeros: %.2lf\n", subtractComplexNumbers(number1, number2));

    printf("Multiplicacao dos numeros: %.2lf\n", multiplyComplexNumbers(number1, number2));

    destroyComplexNumber(number1);
    destroyComplexNumber(number2);
    
    return 0;
}