#include <stdio.h>

int main() {
    char nome[50];
    int idade;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Ola, %s! Como Voce esta? tudo bem? seja muito bem vindo Voce tem %d anos.\n", nome, idade);

    return 0;
}
