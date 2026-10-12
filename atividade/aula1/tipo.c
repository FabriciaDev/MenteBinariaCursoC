#include <stdio.h>

int main(void) {
	/* Declaraççao de Inicialização - sempre prefira assim */
	int idade = 25;		/* int: nímero inteiro - 4 bytes */
	char inicial = 'A';	/* char: um caractere - 1 byte */

	printf("Idade: %d\n", idade);		/* %d = inteiro decimal */
	printf("Inicial: %c\n", inicial);	/* %c = caractere	*/
	printf("Codigo ASCII: %d\n", inicial);	/* %d = ASCII		*/

	return 0;
}

