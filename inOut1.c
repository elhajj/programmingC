#include <stdio.h> 

/* copy input to output */
/* a test for EOF from StackOverflow - shows 1 or 0, depending on whehter you send the inOut1 an EOF character or not. 0 for normal typing, 1 for EOF. */

int main()
{
	char value;
	
	value = ((getchar()) != EOF);
	printf("%i\n", value);
	
	return 0;
}