#include <stdio.h>

int main(){

    //format specifier % = defines and formats a type of data to be displayed.

    // %c = characters
    // %s = string (array of characters)
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision 
    // %1 = minimal field width
    // %- = left align

    float a = 5.51;
    float b = 100.00;
    float c = 123.42;

    printf ("Item a cost around %7.2f\n", a);
    printf ("Item two though cost more which is %10.2f\n", b);
    printf ("Then lastly, item c cost %3.2f\n", c);

    return 0;
}