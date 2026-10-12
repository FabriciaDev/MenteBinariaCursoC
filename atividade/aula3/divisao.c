#include <stdio.h>

int main(void) {

	int a = 10, b = 4;

	/* Ambos inteiros: resultado é inteiro, parde decimal desartada */
	printf("%d\n", a/b);		/* saida 2 */
	printf("%d\n", 10/3);		/* saída 3 */

	/* Um operando double: divisão é real */
	printf("%.2f\n", 10.0/4);	/* saida 2.50 */
	printf("%.2f\n", (double)a/b);	/* saida 2.50 */

	/* Armadilha: Cast fora da divisão não resolve!! */
	printf("%.2f\n", (double)(a/b)); /* saida 2 */

return 0;
}
