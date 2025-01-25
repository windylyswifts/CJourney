#include <stdio.h>
#include <string.h>

int main()
{
/*    //When swapping variables, you can add a temporary data type or char 
    char x = 'X';
    char y = 'Y';
    char temp;

    temp = x; //this is basically the formula 
    x = y;
    y = temp;

*/
    char x[15] = "Water";
    char y[15] = "red"; //if the second variable is less than the first then we must add a size similar for the both variables.
    char temp[15]; //apparently we need to add aa size for this to work

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s\n", x);
    printf("y = %s\n", y);

    return 0;
}