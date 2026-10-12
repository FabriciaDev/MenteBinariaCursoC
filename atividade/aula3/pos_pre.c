#include <stdio.h>

int main(void) {
	int x = 5;

	printf("%d\n", x++); /*usa ox (imprime 5), depois incrementa -> x vira 6*/
	printf("%d\n", x); /*x é 6 agora*/

	printf("%d\n", ++x);/*incrementa primeiro -> x vira 7 , depois usa (imprime 7)*/
	printf("%d\n", x); /* x é 7 agora*/

	return 0;
}




