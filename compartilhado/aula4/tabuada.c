/* tabuada.c — Demo M8-3: tabuada com for aninhado */
#include <stdio.h>

int main(void) {
    int n;
    printf("Imprimir tabuada de 1 até qual número? ");
    scanf("%d", &n);

    /* laço externo: percorre cada número de 1 até n */
    for (int i = 1; i <= n; i++) {
        printf("--- Tabuada do %d ---\n", i);
        /* laço interno: percorre os multiplicadores de 0 a 10 */
        for (int j = 0; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}
