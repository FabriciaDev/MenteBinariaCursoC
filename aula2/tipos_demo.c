#include <stdio.h>

int main(void) {

    char   c = 'A';
    short  s = 100;
    int    i = 42;
    long   l = 9876543210L;
    float  f = 3.14f;
    double d = 3.14159265358979;

    printf("char   c = %c  (%d)\n",  c, c);
    printf("short  s = %d\n",        s);
    printf("int    i = %d\n",        i);
    printf("long   l = %ld\n",       l);
    printf("float  f = %f\n",        f);
    printf("double d = %.15f\n",     d);

    return 0;
}
