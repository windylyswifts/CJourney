#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

//global variable is something like a simply way to let everyone use this variable across functions but kinda risky
//because of overused variable can miss up when debugging
char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';


//function prototypes
void resetboard();
void printboard();
void checkfreespace();
void playermove();
void computerMove();
char checkwinner();
void printwinner(char);


int main(){
    char winner = ' ';

    resetboard();
    printboard();

    return 0;
}

void resetboard(){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }   
    }
}
//too basic, maybe I could make a nestes for loop in the future
void printboard(){

}
void checkfreespace(){

}
void playermove(){

}
void computerMove(){

}
char checkwinner(){

}
void printwinner(char winner){

}
