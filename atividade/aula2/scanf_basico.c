#include <stdio.h>

int main(void) {
	/* scanf básico */
	int idade;
	
	printf("Digite sua Idade: ");		/* pede o valor	*/
	scanf("%d", &idade);			/* lê e guarda a idade */
	printf("Você tem %d anos.\n", idade);	/* imprime	*/	

	return 0;
}
