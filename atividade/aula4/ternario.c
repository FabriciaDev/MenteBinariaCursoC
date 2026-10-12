#include <stdio.h>

int main(void) {

	int a = 10, b = 3;

	/*Com if-elsa*/
	int max;
	if (a > b ){
		max = a;
	} else {
		max = b;
	}

	printf("Maior: %d\n", max); /*saida 10*/

	/* Com ternário: equivalente e mais conciso */
	int max2 = (a > b) ? a : b;

	printf("Maior: %d\n", max2); /*saida 10*/


	return 0;
}
