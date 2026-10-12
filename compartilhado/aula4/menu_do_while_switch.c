/* menu_do_while_switch.c — Demo M8-5: menu com do-while, switch e break */
#include <stdio.h>

int main(void) {
    int opcao;
    float a, b;

    do {
        printf("\n1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            break;   /* encerra o do-while imediatamente */
        }

        printf("Digite dois números: ");
        scanf("%f %f", &a, &b);

        switch (opcao) {
            case 1: printf("Resultado: %.2f\n", a + b); break;
            case 2: printf("Resultado: %.2f\n", a - b); break;
            case 3: printf("Resultado: %.2f\n", a * b); break;
            default: printf("Opção inválida.\n");
        }

    } while (opcao != 0);

    printf("Até logo!\n");
    return 0;
}
