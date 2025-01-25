#include <stdio.h>
#include <string.h>

int main(){

    char string1[] = "Isiah";
    char string2[] = "Iloveme";

    //strlwr(string1);                                              // converts a string to lowercase
    //strupr(string1);                                              // converts a string to uppercase
    //strcat(string1, string2);                                     // appends string2 to end of string1
    //strncat(string1, string2, 1);                                 // appends n characters from string2 to str. The third is the amount of character you want to get from string2
    //strcpy(string1, string2);                                     // copy string2 to string1. This replaces string1 to string2
    //strncpy(string1, string2, 4);                                  // copy n characters of string2 to string1. It replaces the characters from string1 
                                                                   //from string2 given the amount of character that was instructed from the third variable.
    //strset(string1, '?');                                         //sets all characters of a string to a given character.
    //strnset(string1, 'x', 2);                                     //sets first n characters of a string to a given character
    //strrev(string1);                                              //reverses a string

    int result = strlen(string1);                                  //returns string lenght as inter, basically how many characters.
    //int result = strcmp(string1, string2);                       //string compare all characters
    //int result = strcmpi(string1, string2);                      //string compare n characters(ignore case)

    printf("%s", string1);
    //printf("It has a %d", result);

    if (result == 0)
    {
        printf("\nThis strings are the same");
    }
    else{
        printf("\nThis is not the same");
    }

    return 0;
}