#include <stdio.h>

int main(void) {
    double d;
    printf("Digite um número com vírgula: "); 
    scanf("%lf", &d);
    printf("Com %%f   -> %f\n",  d);   /* 6 casas decimais por padrão */
    printf("Com %%.2f -> %.2f\n", d);  /* exatamente 2 casas */
    return 0;
}
