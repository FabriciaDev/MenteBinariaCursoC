/* classifica_nota.c — Demo M7-2: valida a nota e classifica com if-else encadeado */
#include <stdio.h>

int main(void) {
    float nota;
    printf("Digite a nota (0 a 10): ");
    scanf("%f", &nota);

    /* primeiro valida o intervalo */
    if (nota < 0.0f || nota > 10.0f) {
        printf("Nota inválida. Digite um valor entre 0 e 10.\n");
        return 1;
    }

    /* depois classifica */
    if (nota >= 9.0f) {
        printf("Conceito A\n");
    } else if (nota >= 7.0f) {
        printf("Conceito B\n");
    } else if (nota >= 5.0f) {
        printf("Conceito C\n");
    } else {
        printf("Reprovada\n");
    }

    return 0;
}
