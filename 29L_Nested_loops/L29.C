#include <stdio.h>

int main()
{
    //nested loop = a loop inside of another loop

    int rows;
    int columns;
    char symbol;

    printf("Enter a number of rows: ");
    scanf("%d", &rows);

    printf("Enter a number of columns: ");
    scanf("%d", &columns); //after entering the number of columns,it actally made a new line character soon after because it is 
                           // included within the input buffer which is the '&'. So we need to clear that buffer in order to fix the issue
    scanf("%c"); //this basically removed the \n from the previous scanf because its scanning for a character. it basically seperated it from the
                 //previous scanfs.

    printf("Enter a symbol to use: ");
    scanf("%c", &symbol);

    for(int i = 1; i <= rows; i++) //the for loop is handling the outer loop, it will manage the rows for this example
    {
        for(int j = 1; j <= columns; j++) //the inner for loop will handling the amount of columns for this example
        { 
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}