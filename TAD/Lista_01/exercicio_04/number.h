typedef struct complex ComplexNumber;

ComplexNumber* createComplexNumber(double real, double imaginary);

void destroyComplexNumber(ComplexNumber* number);

double sumComplexNumbers(ComplexNumber* number1, ComplexNumber* number2);

double subtractComplexNumbers(ComplexNumber* number1, ComplexNumber* number2);

double multiplyComplexNumbers(ComplexNumber* number1, ComplexNumber* number2);