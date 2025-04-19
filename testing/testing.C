#include <stdio.h>

int main(){
    int i;

    for(i = 1; i <= 6; i++){
        if(i == 1)
            continue;
        if(i == 3)
            continue;
        if(i == 5)
            continue;
        printf("Sun %d\n", i);
        i++;
    }


    return 0;
}