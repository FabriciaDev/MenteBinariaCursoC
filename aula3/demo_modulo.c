#include <stdio.h>

/* Demonstração: padrão % para criar ciclos */
int main(void) {
    int n;

    /* % 2: alterna entre 0 e 1 (par / ímpar) */
    printf("=== n %% 2 ===\n");
    n = 0; printf("n=%d  n%%2=%d\n", n, n % 2);
    n = 1; printf("n=%d  n%%2=%d\n", n, n % 2);
    n = 2; printf("n=%d  n%%2=%d\n", n, n % 2);
    n = 3; printf("n=%d  n%%2=%d\n", n, n % 2);
    n = 4; printf("n=%d  n%%2=%d\n", n, n % 2);
    n = 5; printf("n=%d  n%%2=%d\n", n, n % 2);

    printf("\n");

    /* % 5: cicla de 0 a 4, reinicia em 5 */
    printf("=== n %% 5 ===\n");
    n = 0; printf("n=%d  n%%5=%d\n", n, n % 5);
    n = 1; printf("n=%d  n%%5=%d\n", n, n % 5);
    n = 2; printf("n=%d  n%%5=%d\n", n, n % 5);
    n = 3; printf("n=%d  n%%5=%d\n", n, n % 5);
    n = 4; printf("n=%d  n%%5=%d\n", n, n % 5);
    n = 5; printf("n=%d  n%%5=%d\n", n, n % 5);  /* reinicia: volta a 0 */
    n = 6; printf("n=%d  n%%5=%d\n", n, n % 5);
    n = 7; printf("n=%d  n%%5=%d\n", n, n % 5);
    n = 8; printf("n=%d  n%%5=%d\n", n, n % 5);
    n = 9; printf("n=%d  n%%5=%d\n", n, n % 5);

    printf("\n");

    /* % 16: cada vez que o resto chega a 15, quebra a linha */
    /* é exatamente o que o hexdump faz a cada 16 bytes      */
    printf("=== n %% 16 (simulando quebra de linha do hexdump) ===\n");
    n =  0; printf("n=%2d  n%%16=%2d\n", n, n % 16);
    n =  1; printf("n=%2d  n%%16=%2d\n", n, n % 16);
    n = 14; printf("n=%2d  n%%16=%2d\n", n, n % 16);
    n = 15; printf("n=%2d  n%%16=%2d  <- quebra de linha aqui\n", n, n % 16);
    n = 16; printf("n=%2d  n%%16=%2d  <- reinicia\n", n, n % 16);
    n = 17; printf("n=%2d  n%%16=%2d\n", n, n % 16);
    n = 31; printf("n=%2d  n%%16=%2d  <- próxima quebra\n", n, n % 16);
    n = 32; printf("n=%2d  n%%16=%2d  <- reinicia de novo\n", n, n % 16);

    return 0;
}
