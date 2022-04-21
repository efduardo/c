//Este é um algoritmo que recebe dois números inteiros como entrada e imprime o maior dentre os dois números.

#include <stdio.h>

int main()
{
    int entrada1, entrada2;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &entrada1);
    
    printf("Digite outro numero inteiro: ");
    scanf("%d", &entrada2);
    
    if (entrada1 == entrada2)
        printf("Ambos os numeros sao identicos e iguais a %d", entrada1);
    else
        if (entrada1 > entrada2)
            printf("O maior numero e %d", entrada1);
        else
            printf("O maior numero e %d", entrada2);
    
    return 0;
}
