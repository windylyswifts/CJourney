#include <stdio.h>
#include <string.h>
#include <stdbool.h>


void adjective(char x)
{
    char A[25][50] = {"strong", "Intelligience"};
    for(int i = 0; i < 25; i++)
    {
        if (x >= 'A' && x <= 'Z') {
            x += 32;
        }

        char y = A[i][0];

        if (y >= 'A' && y <= 'Z') {
            y += 32;
        }

        if(x == y) {
            printf("%s", A[i]);
            return;
        }
    }
}

int main()
{
    int size = 0;
    bool error = false;

    while(size <= 0)
    {
        if (error) {
            printf("The number you entered is invalid");
        }

        printf("\nhow many names: ");
        scanf("%d", &size);
        error = true;
    }

    char names[25];

    for(int i = 0; i < size; i++)
    {
        printf("State your name: ");
        scanf("%s", names);
        adjective(names[0]);
        printf("\n");
    }

    return 0;
}