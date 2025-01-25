#include <stdio.h>
#include <string.h>

struct Player // the variable "Player" will serve as a data type once we will use it. Struct can also be used multiple time
{
    char name[12]; 
    int score;

};


int main()
{
/*
    structs = collection of related members ("variables")
              they can be of different data types 
              listed under one name in a block of memory 
              VERY SIMILAR to classes in other languages (but no methods)
*/

struct Player player1; //we can assign values inside of this characters
struct Player player2; 

strcpy(player1.); //when working with an array of character, we will use strcpy. the dot '.' is called
                  //member access operator. Basically it allows us to have access whats inside in the struct 
 
    return 0;
}