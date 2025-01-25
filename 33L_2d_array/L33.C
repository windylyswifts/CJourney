#include <stdio.h>

int main()
{
    // 2d array = an array, where each element is an entire array
    //            useful if you need matrix, grid, or table of data

//    int numbers[2][3] = {{1, 2, 3},{4, 5, 6}}; //when making a matrix or a grid, we need to add two straight brackets and certain values
                                               //the first straight bracket is basically the rows for this 2d_array.
                                               //second is the amount of elements per set or lets say column.
                                               //to better visualize this, it'll look like this:
                                               /*int numbers[2][3] =
                                               {
                                                {1, 2, 3},
                                                {4, 5, 6}
                                               };*/                                        
//when adding values or elements inside the 2d array

    int numbers[2][3]; // setting maximum values of rows and columns

    int rows = sizeof(numbers)/sizeof(numbers[0]); //the entire size of the array divide by one of the element because they are the same size
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]); //the size of the first row divide by one of the elements from the first row

    numbers[0][0] = 1; //the two straight brackets are called indices
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;

    for(int i = 0; i < rows; i++) //the second condition is from the rows that was given earlier in line 19 but we want to make more efficient
    {                          //so we will calculate the amount of rows and columns for efficiency.
        for(int j = 0; j < columns; j++)
        {
            printf("%d ", numbers[i][j]); //so for each iteration(loop) of the linner for loop, we will increase j
        } //when we finish the inner for loop, we will increment i by 1
        printf("\n");
    }
   

    return 0;
}