#include <stdio.h>

int main(void) {
	float a, b;
	int op;

	printf("1 - Somar\n");
	printf("2 - Subtrair\n");
	printf("3 - multiplicar\n");
	printf("Opção\n");
	scanf("%d", &op);
	printf("Digite dois numeros: ");
	scanf("%f %f", &a, &b);

	switch (op) {
		case 1: printf("%.2f\n", a + b); break;
		case 2: printf("%.2f\n", a - b); break;
		case 3: printf("%.2f\n", a * b); break;
		default: printf("Opção inválida\n");
	}

	return 0;
}
