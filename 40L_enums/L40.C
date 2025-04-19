#include <stdio.h>

enum Days{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thru = 5, Fri = 6, Sat = 7}; // enums are constants.
         //we could also add value the constants


int main()
{
    // enum = a user defined type of named integer identifiers
    //        helps to make a program more readable 
    enum Days today = Sun;

    //printf("%d", today);//Enums are integers.
    if (today == Sun || today == Sat)  //usually when we try to put strings in "IF" Statements,
                                       //it wouldn't work but using enums, it can and it makes it
                                       //more understandable 
    {
        printf("It's weekend, dont think about academics.");
    }
    else
    {
        printf("nah dawg you have to do something about your academics");
    }

    
    return 0;
}