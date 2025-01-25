#include <stdio.h>

int main(){

    int age;

    printf("\nWhat's your age?: ");
    scanf("%d", &age);

    /*If combitinations:
    ==
    >=
    <=*/
    if(age >= 18){ //How if works is that if the () is true then whats in the {} will be executed.
        printf("\nYou are now at the step two of the process");
    }

    else if(age <= 0){ //else if is useful whenever you are taking anothe condition before "eles". Like for example here.
        printf("This ain't a game");
    }
    else{ //else will only be executed when "if"is false. 
        printf("\nPlease refrain going any further.");
    }

    return 0;
}