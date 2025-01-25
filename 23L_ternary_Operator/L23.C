#include <stdio.h>

int findMax(int x, int z){
    return (x > z) ? x : z;
    }

int main(){

    //ternary operator = shortcut to if/else when assigning/returning a value 
    //(condition) ? value if true : value is flase. This is the formula

    int max = findMax(5, 4);

    printf("%d", max);

    return 0;
}