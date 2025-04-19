#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //pseudo random numbers = A set of values or elements that are statistically random
    //                       (Don't use these for any sort of crypotographic security)

    srand(time(0)); //The data type srand meaning, 's' for seed and "rand" is random.
 
    int number1 = (rand() % 6) + 1;//the rand function will give you a random number 0 to 32,76. the 
                                   //the symbol '%' is modulus and it gives you the remainder of
                                   //any division                             

    printf("%d", number1); 

    return 0;
}