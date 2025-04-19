#include <stdio.h>

//void is use because we are not returning anything 

void sort(int array[], int size) //The parameter is from the main                                     
{
    for(int i = 0; i < size - 1; i++)  //this sheyt gets hard so next extra lessons.
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(array[j] > array[j+1]) //in the second statement "arrray[j+1], we did the j+1 because we want to check the next one"
            {
                int temp = array[j]; //we will use a temporary variable to store value to swap
                array[j] = array[j+1]; //this will swap the second variable to the first variable. 
                array[j+1] = temp;
            }
        } 
    } 
}

void printArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]); //its array[i] because it is for loop.
    }
}


int main()
{
    int array[] = {9, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    printArray(array, size);

    return 0;
}