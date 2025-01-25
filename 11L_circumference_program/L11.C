#include <stdio.h>

//Make sure to study about circumference cuz there's formulas :<

int main(){

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter the radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius; //the formula for circumference
    area = PI * radius * radius; //the formula for area

    printf("\ncircumference: %lf", circumference); 
    printf("\narea: %lf", area); 

    return 0;
}