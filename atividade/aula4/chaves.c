#include <stdio.h>

int main(void) {

	int x =5;

	/* PERIGOSO: parece que os dois prints estão no if */

	if (x > 10)
		printf("x é maior que 10\n"); /* fora do if */
		printf("esta linha SEMPRE executa\n "); /* fora do if */

	/* CORRETO: Chaves deixam o escopo explicito */

	if (x > 10) {
		printf("x é maior que dez\n");
		printf("esta linha só executa se x > 10\n");
	}

	return 0;
}
