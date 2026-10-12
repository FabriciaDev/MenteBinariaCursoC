/* maioridade.c — Demo M7-1: maioridade com if-else e com ternário */
#include <stdio.h>

int main(void) {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    /* Com if-else */
    if (idade >= 18) {
        printf("Maior de idade\n");
    } else {
        printf("Menor de idade\n");
    }

    /* Com ternário: guarda 'S' ou 'N' em um char */
    char maior = (idade >= 18) ? 'S' : 'N';
    printf("Maior de idade? %c\n", maior);

    return 0;
}
