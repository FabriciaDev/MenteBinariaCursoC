#include <stdio.h>

int main(void) {
    int x = 5;
    printf("sizeof(x++) = %zu\n", sizeof(x++));
    printf("x = %d\n", x);
    return 0;
}

/* x continua 5. O x++ nunca executou — sizeof só olhou o tipo (int = 4 bytes) e descartou a expressão. */