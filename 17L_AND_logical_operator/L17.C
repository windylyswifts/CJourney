#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operators = && (AND) checks if two conditions are true.

    float temp = 25;
    bool sunny = true;

    if(temp >=0 && temp <= 30 && sunny){ // the is no need to put sunny == true because by default, it is set to true.
        printf("Noice! Thats good");
    }

    else{
        printf("Dawg, thats wrong");
    }

    return 0;
}