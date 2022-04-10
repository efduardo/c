//Este programa vai ler dois números inteiros e imprimir a sua soma.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, soma;

    printf("Digite um número inteiro: ");
    scanf("%d", &a);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &b);

    soma = a + b;

    printf("A soma dos números digitados é %d", soma);
}
