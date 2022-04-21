#include <stdio.h>

int main()
{
    int n, total, i, a, sn;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    total = 0;
    i = 0;

    while(total <= n)
    {
        i += 1;
        total += i;
        a = i - 1;
    }

    sn = (1 + a)*a/2;

    printf("A maior soma dos numeros naturais e %d", sn);

    return 0;
}
