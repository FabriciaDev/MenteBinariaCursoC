#include <stdio.h>

int main(void) {

	int a, b;

	double da, db;

	char ca;

	double altura;
	int idade;

/* lê dois inteiros e imprime a diferença (a- b) e o produto (a * b)*/

	printf("Digite o primeiro numero inteiro: ");
        scanf("%d", &a);
        printf("Digite vo seundo número inteiro: ");
        scanf("%d", &b);
        printf("A subtração de %d com %d é %d\n", a, b, a - b);
        printf("O produto de %d com %d é %d\n", a, b, a * b);

/* programa que lê dois dobles e imprime a soma com %.2f */

	printf("Digite o primeiro double: \n");
	scanf("%lf", &da);
	printf("Digite o segundo doubles:\n");
	scanf("%lf", &db);
	printf("A soma de %.2f com %.2f é %.2f\n", da, db, da - db);

/* Programa que lê um char com scanf e imprime como caracter e
 como  numero  ASCII */

	printf("Digite um caractere\n");
	scanf(" %c", &ca);

	printf("O caracterer digitado é %c\n", ca);
	printf("O caracterer digitado em ASCII é %d\n", ca);
/* Programa que lê a altura e a idade e imprime os dois */
	printf("Digite a altura\n");
	scanf("%lf", &altura);
	printf("Digite a idade\n");
        scanf("%d", &idade);
	printf("A sua altura é %.2f e a sua idade é %d\n", altura, idade);
	return 0;
}

