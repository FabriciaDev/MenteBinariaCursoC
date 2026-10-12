#include <stdio.h>

int main(void) {

float f;
double d;

	/*scanf - o formato deve corresponder ao tipo exato */
	scanf("%f", &f);	/*correto para float*/
	scanf("%lf", &d);	/*correto para double*/

	/*Erro clássico - usar %f para ler dpuble*/
	scanf("%f", &d);	/* ERRADO - bytes incorretos */

	/*printf - aqu8i não há diferença prática*/
	printf("%f", f);	/*funciona para float*/
	printf("%f", d);	/*funciona para doubla também*/

