#include <stdio.h>

double square(double x){ //we have to change the data type 'void' to the specific data type
   // double result = x * x;
   // return result; //this is way to return this to the main, its like doing a comission and give it back

    //we can also do this to shorten the process by doiing this.
    return x * x; //this is logical, we return x but it was being processed first before it was return. x * x.
}

int main(){ //thats why its integer cuz 0 is a number therefore int and not void, void is basically a temporary function.

    //return = returns a value back to a calling function.
    double x = square(3.14);
    printf("The value of X is %lf", x);


    return 0; //if you notice, 0 is being placed after returned because 0 means the exit of the run meaning it was succesful go to line 11
}