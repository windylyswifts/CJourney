#include <stdio.h>

int main(){

    //logical operators == || (OR) checks if at least one condition is true

    float temp = -1;

    if (temp <= 0 || temp >= 30){     //you can add more conditions if you want.
        printf("\nThe weather is bad!");
    }
    else{
        printf("\nThatz Good weather!");
    }

    return 0;
}