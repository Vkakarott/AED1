#include <stdio.h>
#include <string.h>

#define A 5;
#define S 10;
#define G 15;
#define O 2;

typedef struct {
    char name[100];
    char position[100];
    double salary;
    int CPF;
    char department[100];
} Employee;

double finalSalary(Employee employee) {
    double salary = employee.salary;

    if (strcmp(employee.position, "Assistente") == 0) {
        salary += employee.salary * 0.05;
    } else if (strcmp(employee.position, "Supervisor") == 0) {
        salary += employee.salary * 0.10;
    } else if (strcmp(employee.position, "Gerente") == 0) {
        salary += employee.salary * 0.15;
    } else {
        salary += employee.salary * 0.02;
    }

    return salary;
}

int main (){
    int numberEmployee;
    double fSalary;
    double sumSalary;
    double normalSalary;

    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &numberEmployee);
    Employee registration[numberEmployee];

    for (int i = 0; i < numberEmployee; i++) {
        printf("Funcionario %d: \n", i+1);

        printf("Name: ");
        scanf(" %[^\n]", registration[i].name);

        printf("Cargo: ");
        scanf(" %[^\n]", registration[i].position);

        printf("Salario-base: ");
        scanf("%lf", &registration[i].salary);

        printf("CPF: ");
        scanf("%d", &registration[i].CPF);

        printf("Departamento: ");
        scanf(" %[^\n]", registration[i].department);

        fSalary = finalSalary(registration[i]);
        sumSalary += fSalary;
    }

    normalSalary = sumSalary / numberEmployee;
    printf("O salario medio dos funcionarios é: %.2f\n", normalSalary);

    return 0;
}