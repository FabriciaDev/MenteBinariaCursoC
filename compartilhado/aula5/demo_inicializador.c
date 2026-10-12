/* demo_inicializador.c — Demo M9-5: inicializador parcial zera o restante */
#include <stdio.h>

int main(void) {
    int v[5] = {1, 2}; /* apenas 2 valores fornecidos */

    for (int i = 0; i < 5; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
    /* Saida:
       v[0] = 1
       v[1] = 2
       v[2] = 0
       v[3] = 0
       v[4] = 0  */
    return 0;
}
