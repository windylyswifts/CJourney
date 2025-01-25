#include <stdio.h>

int main(){

    // for loops = repeats a section of code a limited amount of times

    for(int i = 1; i <= 10; i+=2) //there are three statements needed to execute for loops. first is the counter or index, usually 'i'.
    {                             //Next is the limiter or condition and from this example its i <= 10;
        printf("\n%d!", i);       //Lastly, choose either increment or decrement, ++ or --, and from this example i+=2(this means that it 
                                  //will add up to two each time)
    }

    return 0;
}