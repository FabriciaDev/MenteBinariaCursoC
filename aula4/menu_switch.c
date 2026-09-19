/* menu_switch.c — Demo M7-3: menu de três operações com switch-case e default */
#include <stdio.h>

int main(void) {
    float a, b;
    int op;

    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("Opção: ");
    scanf("%d", &op);
    printf("Digite dois números: ");
    scanf("%f %f", &a, &b);

    switch (op) {
        case 1: printf("%.2f\n", a + b); break;
        case 2: printf("%.2f\n", a - b); break;
        case 3: printf("%.2f\n", a * b); break;
        default: printf("Opção inválida\n");
    }

    return 0;
}
