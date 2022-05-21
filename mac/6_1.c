//Este programa solicita que o usuário digite 6 valores inteiros representando duas datas e imprime qual delas é a maior ou se são iguais.

#include <stdio.h>

int main()
{
    int dia1, mes1, ano1, dia2, mes2, ano2;

    printf("Digite um dia: ");
    scanf("%d", &dia1);
    printf("Digite um mes: ");
    scanf("%d", &mes1);
    printf("Digite um ano: ");
    scanf("%d", &ano1);

    printf("Digite o proximo dia: ");
    scanf("%d", &dia2);
    printf("Digite o proximo mes: ");
    scanf("%d", &mes2);
    printf("Digite o proximo ano: ");
    scanf("%d", &ano2);

    while ((dia1 > 0) && (mes1 > 0) && (ano1 > 0) && (dia2 > 0) && (mes2 > 0) && (ano2 > 0))
    {
        if ((dia1 == dia2) && (mes1 == mes2) && (ano1 == ano2))
            printf("Sao iguais");
        if ((dia1 < dia2) && (mes1 == mes2) && (ano1 == ano2))
            printf("Segunda maior");
        if ((dia1 > dia2) && (mes1 == mes2) && (ano1 == ano2))
            printf("Primeira maior");
        if ((dia1 == dia2 || dia1 != dia2) && (mes1 < mes2) && (ano1 == ano2))
            printf("Segunda maior");
        if ((dia1 == dia2 || dia1 != dia2) && (mes1 > mes2) && (ano1 == ano2))
            printf("Primeira maior");
        if ((dia1 == dia2 || dia1 != dia2) && (mes1 == mes2 || mes1 != mes2) && (ano1 < ano2))
            printf("Segunda maior");
        else
            printf("Primeira maior");
        break;
    }

    return 0;
}
