#include <stdio.h>
#include <ctype.h> //this is mainly for strings

int main(){

    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit); //after the user input the Letter, this will make sure that it is capped or uppercase.

    if(unit == 'C'){
        printf("\nEnter your tempereature in Celius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32; //this is the formula for celius
        printf("\nYour temperature in Ferenheit is currently %.1f", temp);
    }
    else if(unit == 'F'){
        printf("\nEnter your tempereature in Ferenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9; //this is the formula for Ferenhit
        printf("\nYour temperature in Celius is currently %.1f", temp);
    }
    else{
        printf("\nYou're input didn't match what was asked.");

    }

    return 0;
}