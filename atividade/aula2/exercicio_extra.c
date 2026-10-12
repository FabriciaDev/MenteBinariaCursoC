#include <stdio.h>

int main(void) {

	char letra = 'A';
	int num = 32;
	long longo = 1234567890;
	float flutua = 3.12;
	double comvirgula = 3.1234;

	int valor_a, valor_b;

	char caractere;

	int ultimo;

	/*Escreva um programa que declare uma variável de cada tipo básico
	 atribua valores e imprima todos*/

	printf("  o char é %c \n  o int é %d \n  o long é %ld \n  o float é %2f \n  e o double é %lf \n", letra, num, longo, flutua, comvirgula);

	/* Escreva um programa que leia dois valores inteiros e
	 exiba ambos na tela , alem da sua soma */

	printf("Escreva o primeiro inteiro \n");
	scanf("%d", &valor_a);
	printf("Escreva o segundo valor \n");
	scanf("%d", &valor_b);
	printf("A soma do valor %d com o valor %d é igual a %d \n", valor_a, valor_b, valor_a + valor_b);

	/*Escreva um programa que leia um caractere e 
	imprima seu valor numerico ASCII*/

	printf("Digite um caractere\n");
	scanf(" %c", &caractere);

	printf("O caracterer %c  em ASCII é %d\n", caractere, caractere);

	/*Escreva um programa que leia um numero inteiro e 
	imprima-o em decimal e hexadecimal */

	printf("Digite um numero inteiro \n");
	scanf(" %d", &ultimo);
	printf("O número %d em decimal é %d e em hexadecimal é %x .\n", ultimo, ultimo, ultimo);

return 0;
}
