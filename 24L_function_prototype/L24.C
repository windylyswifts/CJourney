#include <stdio.h>

void hello(char [], int); //this is a function prototype, it makes sure that when making arguments, it will tell you that there is something wrong
                          //and wont let you run the syntax.
int main(){

    //function prototype

    //function declaration, w/o a body, before main()
    //Ensures that calls to a function are made with the correct arguments

    char name[] = "isiah";
    int age = 18;

    hello(name, age); //if the inside is wrong then when you run it.

    return 0;
}

void hello(char name[], int age){
    printf("\nHello, %s, WELCOME!", name);
    printf("\nSince you're here, Im sure you are %d", age);
}