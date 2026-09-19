/* demo_sizeof_literal.c — sizeof('A') retorna 4, nao 1 */
#include <stdio.h>

int main(void) {
    printf("sizeof('A')  = %zu\n", sizeof('A'));
    printf("sizeof(char) = %zu\n", sizeof(char));
    return 0;
}
