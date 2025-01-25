#include <stdio.h>

int main()
{
    // arrays = a data strucutured that can store many values of the same data type.

    //double prices[] =  {5.0, 10.0, 15.0, 25.0, 20.0};      //an example of an array

    //if you dont know the values you would like to initialize your array with. you can set a size

    double prices[5]; //setting the size

    prices[0] = 5.0; //when you want to decide on the elements
    prices[1] = 10.0;
    prices[2] = 15.0; 
    prices[3] = 50.0; 
    prices[4] = 32.0; 

    // you could also do the first line which is = double prices[10] =  {5.0, 10.0, 15.0, 25.0, 20.0}; //and add a size for that set.

    printf("$%.2lf", prices[4]); //when handling arrays, we can call one of the elements by using a straight brackets and an index number inside of the brckets
                            //Elements always starts with 0 and in this example there are 5 elements: 0, 1, 2, 3, 4.

    return 0;
}