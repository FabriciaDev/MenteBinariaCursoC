/* demo_media.c — media com for */
#include <stdio.h>

#define TAM 5

int main(void) {
    int notas[TAM] = {7, 8, 6, 9, 7};
    int soma = 0;
    for (int i = 0; i < TAM; i++) {
        soma += notas[i];
    }
    printf("Média: %.1f\n", (float)soma / TAM);
    return 0;
}
