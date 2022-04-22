//Este programa verifica se 3 números podem ou não representar os ângulos de um triângulo. O algoritmo solicita que o usuário digite 3 números naturais (representando ângulos em graus) e imprime "Sim!" e os 3 números na sequência digitada, se somarem 180; e "Não!" e a soma dos 3 números em caso contrário.

#include <stdio.h>

int main()
{
    int anguloa, angulob, anguloc, soma;

    printf("Digite o valor do primeiro angulo: ");
    scanf("%d", &anguloa);

    printf("Digite o valor do segundo angulo: ");
    scanf("%d", &angulob);

    printf("Digite o valor do terceiro angulo: ");
    scanf("%d", &anguloc);
    
    soma = anguloa + angulob + anguloc;

    while ((anguloa > 0) && (angulob > 0) && (anguloc > 0))
    {
        if (soma == 180)
            printf("Sim! %d %d %d", anguloa, angulob, anguloc);
        else
            printf("Nao! %d", soma);
        break;
    }

    return 0;
}
