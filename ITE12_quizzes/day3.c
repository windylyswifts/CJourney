#include <stdio.h>


int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};
    
    int temp = array[0];
    int array[0] = array[5];
    int array[5] = temp;

    int temp1 = array[1];
    int array[1] = array[4];
    int array[4] = temp1;

    int temp2 = array[2];
    int array[2] = array[3];
    int array[3] = temp2;



    printf("%d", array);



    return 0;
}