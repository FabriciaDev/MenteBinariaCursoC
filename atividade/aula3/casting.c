#include <stdio.h>

int main(void) {

	int 	a = 7, b = 2;
	double 	resultado;

	/* Implicita: int + double -> double */
	resultado = a + 2.0;		/* 9.0 */
	printf("%.2f\n", resultado);

	/* Explicita:(tipo) valor converte só naquela expressão */
	resultado = (double)a / b;	/* 3.5, a é convertido antes do / */
	printf("%.2f\n", resultado);

	/* Sem cast: divisão inteira já aconteceu antes */
	resultado = a/b;		/* 3.0 chegou 3 (int) para double */
	printf("%.2f\n", resultado);



return 0;
}

