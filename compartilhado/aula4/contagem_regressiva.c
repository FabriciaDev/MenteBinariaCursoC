/* contagem_regressiva.c — Demo M8-2: contagem regressiva com while */
#include <stdio.h>

int main(void) {
    /* contagem regressiva com while */
    int i = 5;
    while (i > 0) {
        printf("%d\n", i);
        i--;  /* sem esta linha o laço seria infinito */
    }
    printf("Fim!\n");

    return 0;
}
