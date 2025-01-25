#include <stdio.h>

int main(){

    /* augmented assignment operators = used to replace a statement where an operator takes a variable as one of its arguments
        and then assigns the result bakc to the same variable. Therefore, x = x =x + 1 but a shortcut and more appropriate is x+=1*/

    int x = 23;

    x+=100;

    printf ("%d", x);
    return 0;
}