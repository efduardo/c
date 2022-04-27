//Este programa solicita que o usuário digite um inteiro positivo n, então implementa um laço (while) que computa a soma dos n primeiros números pares até o número digitado, imprimindo a soma final. O inteiro 0 é tomado como o primeiro número par.

#include <stdio.h>

int main()
{
    int n, i, p, t, an, sn;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    i = 1;
    p = 0;

    while ((n >= 0) && (p <= n))
    {
        i += 2;
        p += 2;
    }

    t = ((n / 2) + 1);
    an = 0 + (t - 1)*2;
    sn = (0 + an) * (t / 2);

    printf("A soma dos pares é %d", sn);

    return 0;
}
