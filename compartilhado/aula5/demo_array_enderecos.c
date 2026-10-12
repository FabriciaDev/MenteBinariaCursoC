/* demo_array_enderecos.c — enderecos contiguos */
#include <stdio.h>

#define TAM 5

int main(void) {
    int notas[TAM] = {7, 8, 6, 9, 7};
    for (int i = 0; i < TAM; i++)
        printf("notas[%d] = %d  endereço = %p\n",
               i, notas[i], (void *)&notas[i]);
    printf("\nsizeof(int) = %zu bytes\n", sizeof(int));
    return 0;
}
