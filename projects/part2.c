#include <stdio.h>

int main(){
    float y = -1;
    for(int i = 1; i <= 3; i++){
            i+=0.5;
            y = i + 0.5 * y;
    }
    if(int k = 1; k < 4; k++){
        for( i = 1; i <= 3; i++){
            i+=0.5;
            y = i + 0.5 * y;
            printf("%f", y);
        }
    }

    return 0;
}