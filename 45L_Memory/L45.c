#include <stdio.h>

int main(){

    //memory = an array of bytes within RAM (street)
    //memory block = a single unit (byte) within memory, used to hold some value (person)
    //memory address = the adress of where a memory block is located (house address)
    //decimal numbers 0-9
    //hexadecimal numbers 0-9 + A-F

    char a = 'X';
    char b = 'Y';
    char c = 'Z';
    
    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    printf("%p\n", &a);//the specifier to print the address of a memory block is '%p' and of course to locate the address we use '&'
    printf("%p\n", &b);
    printf("%p\n", &c);

    return 0;
}