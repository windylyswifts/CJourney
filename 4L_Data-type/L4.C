#include <stdio.h>
#include <stdbool.h>

int main(){

    char a ='C'; // single character, can be printed using %c
    char b[] = "yeah"; //similar to character but more letters. Basically a string. Can be exicuted by %s
    float c = 3.783129789321; // float means that a number with decimal point. It contains 4 bytes, meaing 6-7 digets. Can be exicuted by %f
    double d = 3.783129789321; // similar to float but it holds twice bytes, 8. Meaning it contains 15-16 digits accurately. Can be exicuted by %lf
    bool e = true; // a boolean only has one function. It turns the variable's value to 0 or 1. It only need 1 byte and can be exicuted by %d
    char f = 100; /*Char can also be interger and the value only ranges from -128 to +127 and it only needs 1 byte and can be exicuted by either %d or %c
                    But the twist is that you can turn char into a number or the corresponding value of the number of a letter.*/
    unsigned char g = 254; /*This is similar to the previous char but the value is ranging from 0 to +255. Though it increase its possible value
                            it removed the negative value. It can be excuted either %d or %c*/
    short int h = 13321; // it stores -32,768 to -32767 and can be executed by %d
    unsigned int i = 43878; // similar to unsigned char, it only applies positive integers and can be executed by %d
    int j = 3801922; // it uses 4 bytes and can be executed by %d
    unsigned int k = 83109232; // same function, only applies positive integers and can be executed by %u
    long long int l = 9182673908712; //this basically contains possible numbers that we ever need but it uses 8 bytes and can be executed by %lld
    unsigned long long int M = 584390548390U; //double the value but only contains possible integers. Can be executed by %llu. U represents the prevention of the warning
    


    printf ("%0.12f\n", c); //adding percentage value will determine the amount of digits
    printf ("%0.12lf\n", d); //adding percentage value will determine the amount of digits
    printf ("%d\n", e);
    printf ("%c\n", f);
    printf ("%d\n", f);
    printf ("%d\n", g);
    printf ("%c\n", g);
    printf ("%d\n", h);
    printf ("%d\n", i);
    printf ("%d\n", j);
    printf ("%u\n", k);
    printf ("%lld\n", l);
    printf ("%llu", M);
    return 0;
}