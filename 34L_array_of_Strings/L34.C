#include <stdio.h>
#include <string.h>

int main()
{
    char cars[][10] = {"Mustang", "Ford", "Ferrari"};
    
    //cars[0] = "Tesla"; we can't directly change the elements of a string by just simply change it. We need to use strcpy.
    strcpy(cars[0], "Tesla"); //basically it copies the string and while its in the same line, it also changes the element.

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);

    }

    return 0;
}