//Este programa solicita que o usuário digite um inteiro positivo n, então implementa um laço (while) que computa a soma dos n primeiros números ímpares até o número digitado, imprimindo a soma final.

#include <stdio.h>

int main()
{
    int n, i, p, a, t, an, sn;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    i = 1;
    p = 0;

    while ((n > 0) && (i <= n))
        {
            i += 2;
            p += 2;
            a = i - 2;
        }

    if (p == n)
        t = n/2;
        an = 1 + (t - 1)*2;
        sn = (1 + an) * (t / 2);
        printf("A soma dos impares e %d", sn);
    else
        a += 1;
        t = (n + 1)/2;
        an = 1 + (t - 1)*2;
        sn = (1 + an) * (t / 2);
        printf("A soma dos impares e %d", sn);

    return 0;
}
