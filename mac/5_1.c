//Este é um programa que recebe um número inteiro não negativo e verifica se ele é par ou ímpar. Se for par imprime 1, caso contrário 0.

#include <stdio.h>

int main()
{
    int entrada, condicaopar;

    printf("Digite um numero inteiro: ");
    scanf("%d", &entrada);

    condicaopar = (entrada % 2);

    while(entrada >= 0)
    {
        if (condicaopar == 0)
            printf("1");
        else
            printf("0");
        break;
    }
    
    return 0;
}
