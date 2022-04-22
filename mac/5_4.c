//Este algoritmo lê três números naturais como entradas e verifica se esses números são pitagóricos. Três números são pitagóricos se o quadrado do maior deles (hipotenusa) é igual à soma do quadrado dos outros dois. Como saída, imprime: se pitagóricos, o valor 1 e o valor da hipotenusa ao quadrado; se não pitagórico, apenas o valor 0.

//Os números são denominados pitagóricos por corresponderem a comprimentos de lados de um triângulo retângulo, ou seja: h² = a² + b².

#include <stdio.h>
#include <math.h>

int main()
{
    int ladoa, ladob, ladoc, ladoa2, ladob2, ladoc2, c_ladoa2, c_ladob2, c_ladoc2;

    printf("Digite o valor do primeiro lado: ");
    scanf("%d", &ladoa);

    printf("Digite o valor do segundo lado: ");
    scanf("%d", &ladob);

    printf("Digite o valor do terceiro lado: ");
    scanf("%d", &ladoc);
    
    ladoa2 = pow(ladoa, 2);
    ladob2 = pow(ladob, 2);
    ladoc2 = pow(ladoc, 2);
    
    c_ladoa2 = ladob2 + ladoc2;
    c_ladob2 = ladoa2 + ladoc2;
    c_ladoc2 = ladoa2 + ladob2;

    while ((ladoa > 0) && (ladob > 0) && (ladoc > 0))
    {
        if (ladoa2 == c_ladoa2)
            printf("1 %d", ladoa2);
        if (ladob2 == c_ladob2)
            printf("1 %d", ladob2);
        if (ladoc2 == c_ladoc2)
            printf("1 %d", ladoc2);
        else
            printf("0");
        break;
    }

    return 0;
}
