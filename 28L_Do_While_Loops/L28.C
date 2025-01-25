#include <stdio.h>

int main()
{
    // while loop = checks a condition, THEN executes a block of code if condition is true
    // do while loop = always executes a block of code once, THEN checks a condition

    int number = 0;
    int sum = 0;

    
    do{ //the system will execute this block of code first
        printf("Enter a number: ");
        scanf("%d", &number);
        if(number > 0)
        {
            sum += number; //or to make it more sense, sum = sum + number;
        }
    }while(number > 0); //and while if the number is still > 0 then it will do the block of code.

    printf("\nYour sum is %d", sum);

    return 0;
}
