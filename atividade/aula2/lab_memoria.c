#include <stdio.h>

int main(void) {

	/* Declare uma variável de cada tipo char c, int i, double d - 
	inicialize com qualquer valor*/

	char c = 'A';
	int i = 43;
	double d = 45.45;

	/* Imprema o endereço de casa uma com %p e anote os resultados*/

	printf("O endereço de %c é %p\n", c, &c);
        printf("O endereço de %d é %p\n", i, &i);
        printf("O endereço de %lf é %p\n", d, &d);

	/* Calcule a diferença entre os endereços c e i, e entre i e d */

	//printf("A diferença entre os endereços %p e %p é %x,\n", &c, &i, &c - &i );

	return 0;
}
