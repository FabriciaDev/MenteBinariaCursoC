#include <stdio.h>

/* Demonstração: erro = vs ==           */
/* compile com -Wall para ver o warning */
int main(void) {
    int x = 10;

    /* CORRETO: == compara */
    if (x == 10) {
        printf("x é 10 (correto)\n");
    }

    /* ERRADO: = atribui: if sempre é verdadeiro quando o valor é não-zero */
    /* Descomente para ver o comportamento e o warning do compilador:       */
    /*
    if (x = 5) {
        printf("sempre entra! x virou %d\n", x);
    }
    */

    return 0;
}
