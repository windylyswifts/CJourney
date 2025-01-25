#include <stdio.h>

int main(){
    
    //switch = A more efficient alternative to using many "else if" statements
    //         allows a value to be tested for equality against many cases.

    char grade;

    printf("\nEnter your Grade: ");
    scanf("%c", &grade);

    switch(grade){ //its basically if else  compact
        case 'A': //case is similar to if, when the value of the output is similar to the case's varaible, then that lines will be executed.
            printf("Congrats, you got a perfect score");
            break; //breaks literally means breaks, it stops here and ignore the rest of the lines inside the switch. 
        case 'B':
            printf("Congrats, you got a almost got a perfect score");
            break;
        case 'C':
            printf("At least you passed!");
            break;
        case 'D':
            printf("Wow, at least you tried!");
            break;
        case 'E':
            printf("You're kinda rare!!");
            break;
        case 'F':
            printf("Dawg, just stop");
            break;
        default:
            printf("You're input was invalid"); 
    }
    return 0;
}