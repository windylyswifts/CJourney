#include <stdio.h>
#include <ctype.h>
//I'll figure this out once i get wifi access

int main(){
    char questions[][100] = {"1. What year did the C language debut?: ",
                             "2. Who is credited with creating C?: ",
                             "3. What is the predecessor of C?:"};

    char options[][100] = {"A. 1969", "B. 1972", "C. 1975", "D. 1999",
                           "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmark", "D. Doc Bar",
                           "A. Objective C", "B. B", "C. C++", "D. C#"};

    char answers[3] = {'B', 'A', 'B'};
    int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score = 0;

    printf("QUIZ GAME!");

    for(int i = 0; i < numberOfQuestions; i++){
        printf("%s\n", questions[i]);
        for(int j = (i * 4); j < (i * 4) + 4; j++){ //The reason why its i * 4 because we need to show the 'A's and the second condition is since we need to show all four answers for each question, we need to do it respectively
            printf("%s\n", options[j]);
        } 
        printf("Guess: ");
        scanf("%c", &guess); //problem here is that it'll skip the next question because it adds a \n || new line
        //scanf("%c"); //just adding another scanf like this and it should remove the \n || New line, we could also use getchar(), it works.

        guess = toupper(guess); //this is an error

        if(guess == answers[i]){
            printf("Correct!");
            score++;
        }
    }
    printf("Final Score: %d/%d", score, numberOfQuestions);

    return 0;
}