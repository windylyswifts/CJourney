#include <stdio.h>

int main()
{
    int a = 5;
    int b = 0;

    printf("Enter a number: ");
    scanf("%d", &b);

    int result = a / b;

    printf("Result: %d\n", result);

    return 0;
}
