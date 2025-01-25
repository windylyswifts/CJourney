#include <stdio.h>
#include <math.h>

int main(){

    double A = sqrt(9); //definition of sqrt is squareroot.
    double B = pow(2, 4); //definition of pow is power and the first number or integer is the base then the next integer is the power.
    int C = round(3.50); //round is yeah 
    int D = ceil(3.01); //basically rounds up only
    int E = floor(3.99); // Similar to ceil but only roudns down
    double F = fabs(-100); // fabs basically refers to the absolute value of the number basically the highest positive value.
    double G = log(3); // log tries to asnwer this question "To what power must a certain base be raised to produce a given number?"
    double H = sin(45); // sin is one of the fundamental trigonometric functions, which relate the angles of a right triangle to the ratios of its sides.
    double I = cos(45); //Computes the cosine of 𝑥 x, where 𝑥 x is in radians.
    double J = tan(45); // Computes the tangent of 𝑥 x, where 𝑥 x is in radians.

    printf("\n%.2lf", A);
    printf("\n%.2lf", B);
    printf("\n%d", C);
    printf("\n%d", D);
    printf("\n%d", E);
    printf("\n%lf", F);
    printf("\n%lf", G);
    printf("\n%lf", H);
    printf("\n%lf", I);
    printf("\n%lf", J);

    return 0;
}
