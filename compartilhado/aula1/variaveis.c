#include <stdio.h>

int main(void) {
    /* Passo 1: int com %d */
    int x = 42;
    printf("x = %d\n", x);

    /* Passo 2: char com %c e %d */
    char c = 'A';
    printf("c = %c\n", c);   /* imprime: A       */
    printf("c = %d\n", c);   /* imprime: 65      */

    /* Passo 3: int em hex */
    printf("x em hex = %x\n", x);  /* imprime: 2a */

    /* Passo 4: variável sem inicializar (demonstração de lixo) */
    int lixo;
    printf("lixo = %d\n", lixo);   /* valor indefinido! */

    return 0;
}
