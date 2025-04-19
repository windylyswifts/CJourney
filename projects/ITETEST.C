#include <stdio.h>
#include <ctype.h>


int main(){
    int guess;

    printf("Guess:");
    scanf("%d", &guess);
    guess = toupper(guess);

    return 0;
}