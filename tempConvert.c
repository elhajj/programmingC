#include <stdio.h>

/* print Fahrenheit-Celsius conversion table for fahr = 0, 20, ..., 300 */

int main() {
    
    /* int fahr, celsius; remove int */
    float fahr, celsius; /* add float for improved accuracy */
    int lower, upper, step;
    
    lower = 0;      /* lower limit of temprature table */
    upper = 300;    /* upper limit of temprature table */
    step = 20;      /* step size */
    
    fahr = lower;
    printf( "Fahrenheit \t Celsius\n");
    while (fahr <= upper) {
        /* celsius = 5 * (fahr-32) /9; remove int calculations */
        celsius = (5.0/9.0) * (fahr-32.0); /* float numbers allow for more natural calculations */
        
        /* printf("%d\t%d\n", fahr, celsius);   a simple tab character between numbers */
        /* printf("%3d %6d\n", fahr, celsius);  remove tab, speicfy column widith */
        printf("%3.0f %14.1f\n", fahr, celsius); /* add float formatting */
        
        fahr = fahr + step;
    }
    
}
