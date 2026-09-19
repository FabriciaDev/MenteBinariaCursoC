/* relacao_ab.c — Demo M7-4: ternários aninhados escolhendo '>', '<' ou '=' */
#include <stdio.h>

int main(void) {
    int a, b;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);

    /* ternários aninhados: determina o símbolo relacional */
    char rel = (a > b) ? '>' : (a < b) ? '<' : '=';

    printf("%d %c %d\n", a, rel, b);

    return 0;
}
