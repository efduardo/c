//Este algoritmo vai ler dois números inteiros e imprimir o quadrado da diferença entre eles.

#include <stdio.h>
#include <math.h>

int main()
{
	int entrada1, entrada2, quadradodadiferenca;

	printf("Digite um numero inteiro: ");
	scanf("%d", &entrada1);

	printf("Digite outro numero inteiro: ");
	scanf("%d", &entrada2);

	quadradodadiferenca = pow((entrada1 - entrada2), 2);

	printf("O quadrado da diferenca dos numeros digitados e %d", quadradodadiferenca);

	return 0;
}
