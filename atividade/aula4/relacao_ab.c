#include <stdio.h>

int main(void) {
	int a, b;
	printf("Digite dois números inteiros: ");
	scanf("%d %d", &a, &b);

	/* ternários aninhados: determina o simbolo relacional */
	char rel = (a > b) ? '>' : (a < b) ? '<' : '=';

	printf("%d %c %d\n", a, rel, b);

	return 0;
}
