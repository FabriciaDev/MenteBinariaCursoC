#include <stdio.h>

int main(void) {

	int a = 20, b = 10;

	int hora, espera, horafinal;

	double  c,f;

	/* Leia dois inteiros e exiba: 
	soma, subtração, multiplicação, divisão inteira e resto */

	printf("soma %d\n", a+b);
	printf("subtração %d\n", a-b);
	printf("divisão %d\n", a/b);
	printf("resto %d\n", a%b); 

	/* Leia a hora atual (0 a 23) e quantas horas esperar:
	 imprima em que hora o relógio vai estar use 524 para dar a volta */

	printf("Digite a hora atual\n");
	scanf("%d", &hora);
	printf("Digite quantas hora precisa esperar\n");
	scanf("%d, &espera", &espera);

	horafinal = (hora + espera) % 24;

	printf("Considerando que a hora atual é %d, daqui a %d horas, será %d horas\n", hora, espera, horafinal);

	/* Conversão de temperatura F = C * 9.0 / 5 + 32 */
	printf("Digite a temperatura em Celsius: \n");
	scanf("%lf", &c);
	f = c * 9.0 / 5 + 32;
	printf("A temperatura de %.2f em Celsius é %.2f em fahrenheit\n", c, f);
	return 0;
}
