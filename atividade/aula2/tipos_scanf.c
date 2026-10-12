#include <stdio.h>

int main(void) {
	/* declarar uma variavel de cada tipos e 
	imprimir com o especifiocador correto */
	char c = 'B';
	short s = 100;
	int i = 42;
	long l = 9876543210L;
	float f = 3.14f;
	double d  = 3.14159265248979;

	int a, b;
	int x;

printf("chart	c = %c:	(%d)\n", c, c);
	printf("short	s = %d\n",	s);
	printf("int	i = %d\n",      i);
	printf("long    l = %ld\n",     l);
	printf("float   f = %2f\n",     f);
	printf("double  d = %.15f\n",   d);

	/* ler dois inteiros com scanf e imprimir a soma*/
	printf("Digite o primeiro numero inteiro: ");
	scanf("%d", &a);
	printf("Digite vo seundo número inteiro: ");
	scanf("%d", &b);

	printf("Soma: %d + %d = %d\n", a, b, a+b);

	return 0;
}
