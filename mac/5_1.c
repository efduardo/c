//Este é um programa que recebe um número inteiro não negativo e verifica se ele é par ou ímpar. Se for par imprime 1, caso contrário 0.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada, condicaopar, um = 1, zero = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &entrada);

    condicaopar = (entrada % 2);

    while(entrada >= 0)
    {
        if (condicaopar == 0)
            printf("%d", um);
        else
            printf("%d", zero);
        break;
    }
    
    return 0;
}
