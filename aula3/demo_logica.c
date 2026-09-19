#include <stdio.h>

/* Demonstração: expressões lógicas complexas e curto-circuito */
int main(void) {
    int x = 50;

    /* Expressão composta com && */
    printf("x em [1,100]? %d\n", x > 0 && x < 100);  /* 1 */

    int a = 0, b = 10;

    /* Curto-circuito: se a == 0, a divisão b/a nunca é executada */
    printf("curto-circuito: %d\n", a != 0 && b / a > 1); /* 0, sem divisão por zero */

    printf("OU curto-circuito: %d\n", a == 0 || b / a > 1); /* 1, b/a não avaliado */

    return 0;
}
