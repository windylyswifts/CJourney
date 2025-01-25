#include <stdio.h>

//when working with arrays, its better to not always update the other lines of the code and might even cause more trouble.
//Thats why in this lesson we will do a better method when dealing with arrays.

int main()
{
    double prices[] = {5.0, 10.0, 2.0, 24.0, 1.0};

    //printf("%d bytes\n", sizeof(prices)); //we need to check how much bytes does this array have and the value of each elements. 


    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++) //there is a possibility when the array do change and so a better way to execute this is to change the 
    {                          //number '5' from this example to the "sizeof".
                               //we will devide the size of the array by one of the elements since they all have the same value 
                               //because they are all in the same data type
                               //therefore, i < sizeof(prices)/sizeof(prices[0]); or any of the element
            printf("%.2lf\n", prices[i]); //here instead of a specific element from the array, we used the index.
    }
    
    return 0;
}