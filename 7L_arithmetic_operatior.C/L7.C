#include <stdio.h>

int main () {

    //arithmetic operators 

    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus), it gives you the reminder of the result
    // ++ increment, adds
    // -- decrement, it deducts

    //value
    int a = 32;
    int b = 12; /*dealing with divisons, devicer are usually in a float data type but when it is required for decevir's data type to be
                  interger then follow line 22*/ 

    //processes

    a--;
    b++;
    
    int c = a + b;
    int d = a - b;
    int e = a * b;
    float f = a / (float) b; // intead of int f = a / b;
    int g = a % b;

    //output
    printf ("%d\n", c);
    printf ("%d\n", d);
    printf ("%d\n", e);
    printf ("%.2f\n", f); /* notice that the answer isn't correct thats because it has decimal points and the data type integer can only store
                           whole numbers. To fix this, you must change the data type*/
    printf ("%d", g);

    return 0;
}