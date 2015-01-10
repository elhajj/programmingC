#include <stdio.h> 

/* copy input to output - second version  */

int main()
{
	int c;
	
	
	while ((c = getchar()) != EOF) {
		/* printf("Is c = getchar() != EOF? %d\n", c = getchar() != EOF );  */
		putchar(c);
	}
}