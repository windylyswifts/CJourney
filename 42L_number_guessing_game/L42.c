#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    const int MIN = 1;
    const int MAX = 100;
    int guess, answer;
    int guesses = 0;
    
    //this uses the current time as a ssed
    srand(time(0));
    //this will generate a random number from 1 to 100
    answer = (rand() % MAX) + MIN;
    do{
        printf("Guess a Numnber: ");
        scanf("%d", &guess);
        if(guess > answer)
            printf("Your guess is too high\n");
        else if(guess < answer)
            printf("Your guess is too low\n");
        else
            printf("You guessed it right!\n");
        guesses++;
    }while(guess != answer);

    printf("Answer is:%d\n", answer);
    printf("Your guesses:%d\n", guesses);

    return 0;
}