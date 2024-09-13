#include <stdio.h>

typedef struct {
    char street[100];
    int number;
    char neighborhood[100];
    char complement[100];
    int zipCode;
    char city[100];
    char state[100];
} Address;

typedef struct {
    char name[100];
    int age;
    Address add;
} Person;

int main() {
    Person user;

    printf("Nome completo: ");
    scanf(" %[^\n]", user.name);;
    
    printf("Idade: ");
    scanf("%d", &user.age);
    while (user.age < 1 || user.age > 120) {
        printf("Digite um numero entre 1 e 120\n");
        printf("Idade: ");
        scanf("%d", &user.age);
    }
    
    printf("Digite seu Endereço:\n");
    printf("Logradouro: ");
    scanf(" %[^\n]", user.add.street);
    printf("Numero: ");
    scanf("%d", &user.add.number);
    printf("Bairro: ");
    scanf(" %[^\n]", user.add.neighborhood);
    printf("Complemento: ");
    scanf(" %[^\n]", user.add.complement);
    printf("CEP: ");
    scanf("%d", &user.add.zipCode);
    printf("Cidade: ");
    scanf(" %[^\n]", user.add.city);
    printf("Estado: ");
    scanf(" %[^\n]", user.add.state);

    printf("%s, %d Anos de idade.\n%s, n%d - %s, %s\n%d - %s - %s\n", user.name,user.age, user.add.street, user.add.number, user.add.neighborhood, user.add.complement, user.add.zipCode, user.add.city, user.add.state);

    return 0;
}