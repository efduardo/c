//Este é um programa que recebe 3 números inteiros e os imprime em ordem decrescente.

#include <stdio.h>

int main()
{
    int entrada1, entrada2, entrada3;

    printf("Digite um numero inteiro: ");
    scanf("%d", &entrada1);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &entrada2);

    printf("Digite mais um numero inteiro: ");
    scanf("%d", &entrada3);

    if ((entrada1 >= entrada2) && (entrada2 >= entrada3))
        printf("%d %d %d", entrada1, entrada2, entrada3);
    if ((entrada1 >= entrada3) && (entrada3 >= entrada2))
        printf("%d %d %d", entrada1, entrada3, entrada2);
    if ((entrada2 >= entrada1) && (entrada1 >= entrada3))
        printf("%d %d %d", entrada2, entrada1, entrada3);
    if ((entrada2 >= entrada3) && (entrada3 >= entrada1))
        printf("%d %d %d", entrada2, entrada3, entrada1);
    if ((entrada3 >= entrada1) && (entrada1 >= entrada2))
        printf("%d %d %d", entrada3, entrada1, entrada2);
    else
        printf("%d %d %d", entrada3, entrada2, entrada1);

    return 0;
}
