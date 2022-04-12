//O João sempre leva para sua escola as maçãs que sobram do depósito do pai, distribuindo-as entre os colegas que encontra no início das aulas. Como o João ainda não aprendeu divisão, ele precisa de um programa para receber como resposta quantas maçãs deve distribuir para cada colega. Ele não pode usar uma faca, deverá fazer uma distribuição de "maças inteiras" e o que sobrar deverá deixar na secretaria da escola.

//Este programa dirá a quantia de maçãs restantes, ou seja, aquelas que precisam ser entregues à secretaria.

#include <stdio.h>

int main()
{
    int entrada1, entrada2, restodadivisao;
  
    printf("Digite o numero total de macas: ");
    scanf("%d", &entrada1);
  
    printf("Digite o numero de alunos: ");
    scanf("%d", &entrada2);
    
    restodadivisao = (entrada1 % entrada2);
    
    while((entrada1 >= 0) && (entrada2 > 0))
    {
        printf("A quantia de maçãs a serem entregues na secretaria é %d", restodadivisao);
        break;
    }
    return 0;
}
