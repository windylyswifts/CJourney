#include <stdio.h>

void bday(char x[], int y){            //this are parameters. Parameters are what functions need in order to be executed. This is what
    printf("\nHappy birthday to %s!", x);//what the line that connects functions, the example here is the  (char name[], int age).
    printf("\nYou are now %d years old!", y); //the name of the parameters doesn't need to be the same to the agruments.
                                                //whats important is the order of the parameters.
}

int main(){

    char name[] = "Isiah";
    int age = 18;
    
    bday(name, age); //anything that you're passing to a function is a agruments. Without it, you wouldn't be able to sent information to
                     //other function.


    return 0;
}