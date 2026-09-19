#include <stdio.h>

int main(void) {
    int a = 7, b = 2;

    printf("7/2         = %d\n",   a / b);             /* 3   — inteiro  */
    printf("7.0/2       = %.4f\n", 7.0 / b);           /* 3.5 — real     */
    printf("(double)7/2 = %.4f\n", (double)a / b);     /* 3.5 — real     */
    printf("(double)(7/2) = %.4f\n", (double)(a / b)); /* 3.0 — armadilha! */

    return 0;
}
