//Este programa vai ler dois números inteiros e imprimir a sua soma.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int entrada1, entrada2, soma;

    printf("Digite um número inteiro: ");
    scanf("%d", &entrada1);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &entrada2);

    soma = entrada1 + entrada2;

    printf("A soma dos números digitados é %d", soma);
}
