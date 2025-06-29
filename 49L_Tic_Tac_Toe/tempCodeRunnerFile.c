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
int checkfreespace();
void playermove();
void computerMove();
char checkwinner();
void printwinner(char);


int main(){
    char winner = ' ';
    resetboard();
    while (winner == ' ' && checkfreespace() != 0){
        printboard();
        //playermove
        playermove();
        winner = checkwinner();
        if (winner != ' ' || checkfreespace == 0){
            break;
        }
        //computer move
        computerMove();
        winner = checkwinner();
        if (winner != ' ' || checkfreespace == 0){
            break;
        }
    }

    printboard();
    printwinner(winner);
    
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
    printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}   
int checkfreespace(){
    int freespace = 9;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != ' ')
            {
                freespace--;

            }
        }
    }
    return freespace;
}
void playermove(){
    int x;
    int y;

    do{  
    printf("Enter the row #(1-3):");
    scanf("%d", &x);
    x--;
    printf("Enter the column #(1-3):");
    scanf("%d", &y);
    y--;

    if(board[x][y] != ' '){
        printf("spot already taken!");
    }
    else{
        board[x][y] = PLAYER;
        break;
    }
    } while (board[x][y] != ' ');
}
void computerMove(){
    //we need to create a seed based on time
    srand(time(0));
    int x;
    int y;

    if (checkfreespace() > 0){
        do{
            x = rand() % 3;
            y = rand() % 3;
        } while (board[x][y] != ' ');

        board[x][y] = COMPUTER;
    }
    else{
        printwinner(' ');
    }
    
}
char checkwinner(){
    //check rows
    for (int i = 0; i < 3; i++){
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2]){
            return board[i][0];
        }
    }
    //check columns
    for (int i = 0; i < 3; i++){
        if (board[0][i] == board[1][i] && board[0][i] == board[2][i]){
            return board[0][i];
        }
    }
    //check diagonals
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2]){
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[0][2] == board[2][0]){
        return board[0][2];
    }
    

}
void printwinner(char winner){
    if (winner == PLAYER)
    {
        printf("YOU WIN!");
    }
    else if(winner == COMPUTER){
        printf("YOU LOSE!");
    }
    else{
        printf("DRAW!");
    }
    
}
