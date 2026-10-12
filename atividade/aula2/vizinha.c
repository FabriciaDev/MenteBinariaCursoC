#include <stdio.h>

int main(void) {
	/* Declarar int a = 10 b = 20 c = 30 e 
	imprimir  os três endereços com %p */ 
	int a = 10;
	int b = 20;
	int c = 30;

	printf("O endereço de %d é %p\n", a, &a);
	printf("O endereço de %d é %p\n", b, &b);
	printf("O endereço de %d é %p\n", c, &c);

return 0;
}

