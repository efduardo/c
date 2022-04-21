//Este programa vai ler dois números inteiros e imprimir a sua soma.

#include <stdio.h>

int main()
{
    int entrada1, entrada2, soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &entrada1);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &entrada2);

    soma = entrada1 + entrada2;

    printf("A soma dos numeros digitados e %d", soma);
    
    return 0;
}
