#include <stdio.h>

int global = 100;	/* Variável global */

int main(void) {

	int local = 42; /*variavel local */

	printf("Valor de global:	%d\n",	global);
	printf("Endereço de global	%p\n",	&global);
	printf("Valor de local:		%d\n",	local);
	printf("Endereço de local:	%p\n",	&local);

	return 0;
}
