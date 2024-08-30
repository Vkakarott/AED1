#include <stdio.h>

typedef struct  {
    char name[100];
    int numberEmployee;
    int yearExistence;
} Department;


typedef struct {
    char name[100];
    int registration;
    int yearWorked;
    Department depart;
} Employee;

int main() {
    int size;

    printf("Quantidade de funcionarios: ");
    scanf("%d", &size);

    Employee emp[size];

    for (int i = 1; i <= size; i++) {
        printf("Funcionario %d.\n", i);
        printf("Nome do funcionario: ");
        scanf("%s", emp[i-1].name);
        printf("Numero da matricula: ");
        scanf("%d", &emp[i-1].registration);
        printf("Anos trabalhados: ");
        scanf("%d", &emp[i-1].yearWorked);
        printf("Departamento: ");
        scanf("%s", emp[i-1].depart.name);
        printf("Quantida de funcionarios do departamento: ");
        scanf("%d", &emp[i-1].depart.numberEmployee);
        printf("Anos de existencia do departamento: ");
        scanf("%d", &emp[i-1].depart.yearExistence);
    }

    for(int i = 1; i <= size; i++) {
        printf("%s, %d\n%d Anos de empresa\n", emp[i-1].name, emp[i-1].registration, emp[i-1].yearWorked);
        
        if(emp[i-1].yearWorked > 30) printf("%s Ja pode solicitar aposentadoria.\n", emp[i-1].name);

        printf("Departamento %s com %d funcionarios ao total\n%d Anos de existencia do departamento.\n\n", emp[i-1].depart.name, emp[i-1].depart.numberEmployee, emp[i-1].depart.yearExistence);
        
    }

    return 0;
}