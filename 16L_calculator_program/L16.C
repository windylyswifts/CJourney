#include <stdio.h>

//this is a pratice, to get to know what to use.

int main(){

    char opt;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+ - * /): ");
    scanf("%c", &opt);

    printf("\nEnter your first number: ");
    scanf("%lf", &num1);

    printf("\nEnter your second number: ");
    scanf("%lf", &num2);

    switch(opt){
    case '+':
        result = num1 + num2;
        printf("\n%lf", result);
        break;
    case '-':
        result = num1 - num2;
        printf("\n%lf", result);
        break;
    case '*':
        result = num1 * num2;
        printf("\n%lf", result);
        break;
    case '/':
        result = num1 / num2;
        printf("\n%lf", result);
        break;
    default:
        printf("\nYour input %c was invalid, try again", opt);
    }

    return 0;
}