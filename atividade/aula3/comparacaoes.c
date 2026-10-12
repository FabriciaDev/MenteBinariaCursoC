#include <stdio.h>

int main(void) {

	/*Comparações retornam 0 ou 1. Use %d para ver o que C calcula */

	printf("%d", 5 > 3);		/* 1 */
	printf("%d", 5 < 3);            /* 0 */
	printf("%d", 5 == 5);           /* 1 */
	printf("%d", 5 != 5);           /* 0 */
	printf("%d", 3 > 1 && 2 < 4);   /* 1 */
	printf("%d", 3 > 1 && 2 > 4);   /* 0 */ 
	printf("%d", 1 > 3 || 2 < 4);    /* 1 */
	printf("%d", !(5 > 3));         /* 0 */

	return 0;
}
