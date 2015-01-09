#include <stdio.h>

/* print Celsius-Fahrenheit conversion table for celsius = 0, 20, ..., 300 */

int main() {
    

    float fahr, celsius;   	
    int lower, upper, step;
    
    lower = 0;      	/* lower limit of temprature table */
    upper = 300;    	/* upper limit of temprature table */
    step = 20;      	/* step size */
    
    celsius = lower;	/* initialize celsius */
	
    printf( "Celsius   Fahrenheit\n"); /*print header */

    while (celsius <= upper) { /* loop test: is celsius less than or equal to the upper range? */ 
        
        fahr = (9.0/5.0) * (celsius+32.0); /* if not, then convert celsius to fahr */
		
        printf("%3.0f %11.1f\n", celsius, fahr); /* and print result to the screen */
        
        celsius = celsius + step; /* then add a step */
    }
    
}
