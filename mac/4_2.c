//Este é um algoritmo que recebe dois números inteiros como entradas e imprime 1 se ocorrer entrada1 < entrada2, e 0 se ocorrer entrada1 >= entrada2.

#include <stdio.h>

int main()
{
    int entrada1, entrada2;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &entrada1);
    
    printf("Digite outro numero inteiro: ");
    scanf("%d", &entrada2);
    
    if (entrada1 < entrada2)
        printf("1");
    else
        printf("0");
    
    return 0;
}
