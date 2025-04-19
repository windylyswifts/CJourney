#include <stdio.h>

int main(){
    int i, j;

    for(i=0; i<5;i++){
        for(j=2;j>i;j--){
            printf(" ");
            printf("1");
        }
        for(j=0;j<=1;j++)
            printf("*");
            printf("2");
    printf("\n");
    }


    return 0;
}