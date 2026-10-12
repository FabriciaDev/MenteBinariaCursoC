#include <stdio.h>

int main(void) {
	/* Variáveis, printf e hexadecimal */
	int idade = 46;		/* int: nímero inteiro - 4 bytes */
	char nome = 'F';	/* char: um caractere - 1 byte */

	printf("Idade: %d\n", idade);		/* %d = inteiro decimal */
	printf("Inicial do nome: %c\n", nome);	/* %c = caractere	*/
	printf("Codigo ASCII: %d\n", nome);	/* %d = ASCII		*/
	printf("Idade em hexa: %x\n", idade); 	/* %x = hexadecimal	*/
	printf("Idade em int: %c\n ", idade);   /*  o que acontece se escreve int como char */ 
	return 0;
}
