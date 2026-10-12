/* demo_ubi.c — acesso fora dos limites (didatico) */
#include <stdio.h>

int main(void) {
    int v[5] = {10, 20, 30, 40, 50};
    /* PERIGOSO: comportamento indefinido */
    printf("%d\n", v[5]);
    return 0;
}
