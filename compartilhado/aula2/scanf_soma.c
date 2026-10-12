/* ler dois inteiros com scanf e imprimir a soma */
#include <stdio.h>

int main(void) {
    int a, b;
    printf("Digite o primeiro inteiro:  "); 
    scanf("%d", &a);
    printf("Digite o segundo inteiro:   "); 
    scanf("%d", &b);
    printf("Soma: %d + %d = %d\n", a, b, a + b);
    return 0;
}
