#include <stdio.h>

int main(void) {

	int x = 1;

	switch (x) {

		case 1:
			printf("case 1\n");  /* sem break */
                      //  break;
		case 2: 
			printf("case 2\n");  /* sem break */
                      //  break;
		case 3 :
			printf("case 3\n");
			break;
		default:
			printf("default\n");
		}
	return 0;
}

