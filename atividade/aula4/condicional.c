#include <stdio.h>

int main(void) {

	int nota = 8;

	if(nota >= 7) {
		printf("Aprovada\n");
	} else {
		printf("Reprovada\n");
	}

	/*if -else encadeado: multiplas condições */

	if (nota >= 9) {
		printf("A\n");
	} else if (nota >= 7 ) { 
		printf("B\n");
	} else if (nota >= 5) {
		printf("C\n");
	} else {
		printf("Reprovado\n");
	}

	return 0;
}
