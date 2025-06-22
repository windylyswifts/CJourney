#include <stdio.h>
    //pointers  = a "varaiable-like" reference that holds a memory address to another variable, array, etc.
    //some tasks are performed more easily with pointers   
    //*= indirection operatior (value at address)
    //advantage of using pointers: less time in program execution. Working on the original variable. With the help of pointers,
    //we create data structures (linked-list, stack, queue).Returning more than one values from functions. Searching and sorting large data very easily
    //Dynamically memory allocation.
 
    void printAge(int *pAge){
        printf("You are currently %d Years old!", *pAge);//we need to dereference it which is basically use the indirection operator.

    }

int main(){
    int age = 21; // this integer has a value and an address
    int *pAge = NULL; //Its a good practice to redirect to NULL first
    pAge = &age; //the value of this variable is the same value from where it is being address which is age.

    printf("address of variable age:%p\n", &age); // the ampersand or "&" is the address of operator, basically telling the system to go to this direction
    printf("value of age:%d\n", age);
    printf("adress of pAge:%p\n", pAge);
    printf("value of pAge:%d\n", *pAge); //we are using a pointer or indirection operator because we basically want to know the value that was being addressed.
                                         //the way I think of it is basically "Hey can you show the current value of this variable"
    printAge(pAge);

    return 0;
}