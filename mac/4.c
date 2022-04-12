//O João sempre leva para sua escola as maçãs que sobram do depósito do pai, distribuindo-as entre os colegas que encontra no início das aulas. Como o João ainda não aprendeu divisão, ele precisa de um programa para receber como resposta quantas maçãs deve distribuir para cada colega. Ele não pode usar uma faca, deverá fazer uma distribuição de "maçãs inteiras" e o que sobrar deverá deixar na secretaria da escola.

//Este programa dirá a quantia de maçãs a ser entregue a cada aluno.

#include <stdio.h>

int main()
{
    int entrada1, entrada2, inteirodadivisao ;
    printf("Digite o numero total de maças: ");
    scanf("%d", &entrada1);

    printf("Digite o numero de alunos: ");
    scanf("%d", &entrada2);

    inteirodadivisao = (entrada1 / entrada2);

    while(entrada1 >= 0)
    {
        printf("O numero de maças a serem entregues a cada aluno e %d", inteirodadivisao);
        break;
    }

    return 0;
}
