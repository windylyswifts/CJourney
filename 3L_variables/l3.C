#include <stdio.h>

int main(){
    
    /*Variables = allocated space in memory to store a value. 
    We refer this to a variable's name to access the stored value. 
    That variables now behaves as if it was the value it contains.
    But we need to declare what type of data we are storing.*/

    int x; //declaration
    x = 123; //initialization
    int y = 123; //declartion + initialization in one line.
    
    int age = 18; //interger
    float gpa = 1.0; //floating point number / decimal numbers.
    char grade ='A'; //stores single character.
    char name[] = "Bro"; //arrays of characters 

    printf ("%s, Hi\n", name);
    printf ("Your age right now is %d\n", age);
    printf ("and currently you have a gpa of %f\n", gpa);
    printf ("that means that you have a %c grading\n", grade);
    return 0;
}