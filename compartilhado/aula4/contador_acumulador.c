/* contador_acumulador.c — Demo M8-4: conta e soma os positivos até ler 0 */
#include <stdio.h>

int main(void) {
    int n, total = 0;
    double soma = 0.0;

    printf("Digite números inteiros (0 para parar):\n");
    scanf("%d", &n);

    while (n != 0) {
        if (n > 0) {
            soma += n;   /* acumulador: soma apenas os positivos */
            total++;     /* contador: conta quantos positivos foram lidos */
        }
        scanf("%d", &n);
    }

    if (total > 0) {
        printf("Positivos lidos: %d\n", total);
        printf("Soma dos positivos: %.0f\n", soma);
        printf("Média dos positivos: %.2f\n", soma / total);
    } else {
        printf("Nenhum número positivo digitado.\n");
    }

    return 0;
}
