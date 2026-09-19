#include <stdio.h>

int main(void) {
    int a = 10;
    int b = 20;
    int c = 30;

    printf("Endereço de a: %p\n", &a);
    printf("Endereço de b: %p\n", &b);
    printf("Endereço de c: %p\n", &c);

    return 0;
}
