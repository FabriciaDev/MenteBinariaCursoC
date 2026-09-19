/* demo_sizeof_compare.c — sizeof de int[] vs char[] */
#include <stdio.h>

int main(void) {
    int  vi[] = {10, 20, 30, 40, 50};
    char vc[] = {72, 101, 108, 108, 111};
    printf("sizeof(vi) = %zu  sizeof(vi[0]) = %zu\n",
           sizeof(vi), sizeof(vi[0]));
    printf("sizeof(vc) = %zu  sizeof(vc[0]) = %zu\n",
           sizeof(vc), sizeof(vc[0]));
    return 0;
}
