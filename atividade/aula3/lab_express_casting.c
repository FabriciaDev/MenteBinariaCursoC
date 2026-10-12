#include <stdio.h>

int main(void) {

	double nota1, nota2, nota3, media;

	int total_segundo, hora, minuto, segundo;

	int inteiro, primeiro;

	int conta = 0;

	/* Leia 3 notas (double) e calcule a média 
	- atenção ao tipo do resultado)*/
	printf("Insira a primeira nota: \n");
	scanf("%lf", &nota1);

        printf("Insira a segunda nota: \n");
        scanf("%lf", &nota2);

        printf("Insira a terceira nota: \n");
        scanf("%lf", &nota3);

	media = (nota1 + nota2 + nota3) / 3;

	printf("A média de %.2f , %.2f e %.2f é o valor %.2f \n", nota1, nota2, nota3, media);

	/* Leia um valor em segundos e converta em horas, minutos e segundos */

	printf("Digite o numero de segundos \n");
        scanf("%d", &total_segundo);

	hora = total_segundo / 3600;
	minuto = (total_segundo % 3600) / 60;
	segundo = (total_segundo % 3600) % 60;

	printf(" %d segundos são %d horas, %d minutos e %d segundos \n", total_segundo, hora, minuto, segundo);

	/* Desafio: use x += para acumular e x++ para contar
	escreva um programa que demonstre os dois*/

	printf("Digite um numero inteiro \n");
	scanf("%d", &inteiro);
	primeiro = inteiro;
	inteiro += 7;
	printf("O numero %d somado a 7 é igual a %d \n", primeiro, inteiro);

	conta++;
	conta++;
	conta++;
	printf("Depois de um contador iniciado em 0 ser incrementado duas vezes com x++ o resutado foi %d \n", conta);
	return 0;
}
