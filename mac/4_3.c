//Este algoritmo solicita que o usuário digite 2 valores inteiros, armazenando o primeiro em uma variável e o segundo em outra variável; feito isto, utiliza uma nova variável (auxiliar) para trocar o conteúdo armazenado na primeira variável com o da segunda variável; finalmente imprime o valor da segunda e o da primeira, nesta ordem!

#include <stdio.h>

int main()
{
    int variavel1, variavel2, auxiliar;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &variavel1);
    
    printf("Digite outro numero inteiro: ");
    scanf("%d", &variavel2);
    
    printf("%d %d", variavel2, variavel1);
    scanf("%d", auxiliar);
    
    return 0;
}
