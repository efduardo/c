//Este programa vai ler um número inteiro e imprimir o seu quadrado.

#include <stdio.h>
#include <math.h>

int main()
{
    int entrada, quadrado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &entrada);

    quadrado = pow(entrada, 2);

    printf("O quadrado do numero digitado e %d", quadrado);

    return 0;
}
