#include <stdio.h>
#include <stdbool.h>

int main(){

    //logical operators == ! (NOT) reverses the state of a condition

    bool sunny = true;

    if(!sunny){  //there's no need to write down sunny == true since in default, it is set to true.
        printf("\nAy, you should go outside and touch grass");
    }
    else{ //its basically lying to you.
        printf("\nnah dawg just stay inside");
    }

    return 0;
}