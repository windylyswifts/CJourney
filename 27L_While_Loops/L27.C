#include <stdio.h>
#include <string.h>

int main()
{
    // while loop = repeats a section of code possibly unlimited times.
    // WHILE some condition remains true
    // a while loop might not execute at all

    char name[25];

    printf("\nWhats your name:");
    //scanf("%c", name);           scanf is usually used but if names, usually it comes with spaces so fgets is a better option
    fgets(name, 25, stdin); //refer L9
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0)
    {
        printf("\nPlease enter your name");
        printf("\nWhats youyr name:");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello!, %s", name);



    return 0;
}