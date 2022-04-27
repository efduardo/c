//Este programa solicita que o usuário digite um inteiro n e, como saída, imprime a soma dos dígitos do número n, e em seguida a unidade do número n.

#include <stdio.h>

int main()
{
    int n, soma, resto, unidade;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    soma = 0;

    while (n != 0)
    {
        resto = n % 10;
        n = (n - resto)/10;
        soma += resto;
    }

    unidade = soma%10;

    printf("%d %d", soma, unidade);

    return 0;
}
