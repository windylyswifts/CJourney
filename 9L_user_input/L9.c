#include <stdio.h>
#include <string.h> //this gets complicated but sooner lesson will cover this.


int main() {

    int age;
    char name[50]; //bytes

    printf("\nWhat's your name?");
    //scanf("%s", &name); This is not optimal because there are times when the user will use white space which distrupts the syntx

    fgets(name, 30, stdin); //fgets is a better alternative as it also reads white spaces. first is the variable then the size or the bytes.
                       // then lastly, stdin since you are trying to input this ig.
    name[strlen(name)-1] = '\0'; //this gets complicated but basically this adjust the string length

    printf("\nHow old are you?");
    scanf("%d", &age); //scanf reads input from the terminal.  the & is the address-of operator. 
                       //It is used to obtain the memory address of a variable. 

    printf ("So your are %s, Helloooo!\n", name); //notice that after the % was stated, it made a new line. A solution for this the line 
                                                  // 2 
    printf ("So you are %d\n", age);

    return 0;    
}