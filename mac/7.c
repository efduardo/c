//Este é um algoritmo que recebe dois números inteiros como entradas e imprime 1 se ocorrer entrada1 < entrada2, e 0 se ocorrer entrada1 >= entrada2.

#include <stdio.h>

int main()
{
    int entrada1, entrada2, um = 1, zero = 0;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &entrada1);
    
    printf("Digite outro numero inteiro: ");
    scanf("%d", &entrada2);
    
    if (entrada1 < entrada2)
        printf("%d", um);
    else
        printf("%d", zero);
    
    return 0;
}
