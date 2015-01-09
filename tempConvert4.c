#include <stdio.h>

/* print Fahrenheit-Celsius table, using the for statement, a generalied version of the "while" loop */
/* exercise 1.5, print table in reverse order */

int main ()
{
		int fahr; 
		
		printf("Fahr \t Celsius\n");
		for (fahr = 300; fahr >= 0; fahr = fahr -20)
		printf("%4d %10.1f\n", fahr, (5.0/9.0)*(fahr-32));
}