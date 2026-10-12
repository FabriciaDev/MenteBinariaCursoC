#include <stdio.h>

int main(void) {
	int opcao = 2;

	switch (opcao) {
		case 1:
			printf("Somar\n");
			break; /*sem break: cai para o proximo case!*/
		case 2:
			printf("Subtrair\n");
			break;
		case 3:
			printf("Mulktiplicar\n");
			break;
		default:
			printf("Opção inválida!\n");
	}
	return 0;
}
