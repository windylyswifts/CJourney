#include <stdio.h>

int main(){

    int unit, customer_type;
    float bill;

    //printf("Enter the amount of units of consumed:");
    //scanf("%d", &unit);
    printf("Enter the Your Status:");
    scanf("%d", customer_type);

    while(customer_type > 2 || customer_type < 0){
        printf("Yourinput invalid");
        printf("Enter your Status:");
        scanf("%d", &customer_type);
    }

    return 0;
}