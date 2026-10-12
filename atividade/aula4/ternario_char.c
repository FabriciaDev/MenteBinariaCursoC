#include <stdio.h>

int main(void) {

	int x = 7;

	/* if - else equivalente */

	char resultado;
	if (x % 2 == 0) {
		resultado = 'p';
	} else {
		resultado = 'i';
	}

	/* com ternário: mais conciso, mesmo comportamento */

	char res = (x % 2 == 0) ? 'p' : 'i';

	/* saida */

	printf("Par ou impar? %c\n", res);
	printf("Par ou impar? %c\n", resultado);

	return 0;
}
