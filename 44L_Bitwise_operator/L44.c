#include <stdio.h>

int main(){
    //BITWISE OPERATORS = special operators used in bit level programming 
    //                    (knowing binary is important for this topic)
    // & = AND
    // | = OR
    // ^ = XOR
    // << left shift
    // >> riht shift

    int x = 6;  // 6 = 00000110. This is the binary representation of 6 in 8-bit
    int y = 12; //12 = 00001100
    int z = 0;  // 0 = 00000000
    //This lesson is basically how the operators work and its amazing 

    z = x & y; //if mixed together with the & therefore both values must be true or '1' which in this case "00000100" therefore "4"
    printf("AND = %d\n", z);

    z = x | y; //if its OR, then at least one value is 1 which in this class "00001110"
    printf("OR = %d\n", z);

    z = x ^ y; //if its XOR || exclusive OR, then only one values needs to be true and not both which in this class "00001010"
    printf("XOR = %d\n", z);

    z = x << 1; //if its LEFT SHIFT, all digit move to a certain number to the left which in this case "00001100"
    printf("LEFT SHIFT = %d\n", z);

    z = x >> 1; //if its RIGHT SHIFT, all digit move to a certain number to the right which in this case "00000110"
    printf("XOR = %d", z);
    
    return 0;
}