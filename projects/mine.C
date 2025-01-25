#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void adjective(char x)
{
    switch (x)
    {
    case 'a':
        printf("Your adjective is Ambitous!\n");
        break;
    case 'b':
        printf("Your adjective is Brave!\n");
        break;
    case 'c':
        printf("Your adjective is Calm!\n");
        break;
    case 'd':
        printf("Your adjective is Diligent!\n");
        break;
    case 'e':
        printf("Your adjective is Easy!\n");
        break;
    case 'f':
        printf("Your adjective is Friendly!\n");
        break;
    case 'g':
        printf("Your adjective is Good!\n");
        break;
    case 'h':
        printf("Your adjective is Happy!\n");
        break;
    case 'i':
        printf("Your adjective is Ignorant\n");
        break;
    case 'j':
        printf("Your adjective is Joyful!\n");
        break;
    case 'k':
        printf("Your adjective is Kind!\n");
        break;
    case 'l':
        printf("Your adjective is Large!\n");
        break;
    case 'm':
        printf("Your adjective is Mysterious!\n");
        break;
    case 'n':
        printf("Your adjective is Nice!\n");
        break;
    case 'o':
        printf("Your adjective is Old!\n");
        break;
    case 'p':
        printf("Your adjective is Powerful!\n");
        break;
    case 'q':
        printf("Your adjective is Quiet!\n");
        break;
    case 'r':
        printf("Your adjective is Rich!\n");
        break;
    case 's':
        printf("Your adjective is Strong!\n");
        break;
    case 't':
        printf("Your adjective is Tall!\n");
        break;
    case 'u':
        printf("Your adjective is Unique!\n");
        break;
    case 'v':
        printf("Your adjective is Vibrant!\n");
        break;
    case 'w':
        printf("Your adjective is Wise!\n");
        break;
    case 'x':
        printf("Your adjective is Excited!\n");
        break;
    case 'y':
        printf("Your adjective is Yummy!\n");
        break;
    case 'z':
        printf("Your adjective is Zealous!\n");
        break;
    
    default:
        printf("Thats not a name");
    }
}

void listof(char [])
{
    char adjectivelist[26][50] = {"A-Ambitious", "B-Brave", "C-Calm", "D-Diligent", "E-Easy", "F-Friendly", "G-Good", "H-Happy", "I-Ignorant",
    "J-Joyful", "K-Kind", "L-Large", "M-Mysterious", "N-Nice", "O-Old", "P-Powerful", "Q-Quiet", "R-Rich", "S-Strong", "T-Tall", "U-Unique",
    "V-Vibrant", "W-Wise", "E-Excited", "Y-Yummy", "Z-Zetsy"};
    for(int i = 0; i < 26; i++)
    {
        printf("%s\n", adjectivelist[i]); 
    }
}

int main()
{
    int size = 0;
    bool error = false;

    while(size <= 0 || size > 26) //
    {
        if (error) {
            printf("The number you entered is invalid");
        }

        printf("\nhow many names: "); //regardless of the input from the user, the line error will set to true.
        scanf("%d", &size);
        error = true; //this is basically the end of the first iteration and will go back to the first line of this while loop
                      //to check the condition hasn't met
    }

    char names[25];

    for(int i = 0; i < size; i++)
    {
        printf("State your first name: ");
        scanf("%s", names);
        strlwr(names);
        adjective(names[0]); //its names[0], because we only want to get the first letter of the name
        printf("\n");
    }

    char list[25];

    printf("Here are the list of adjectives:\n");

    listof(list);

    return 0;
}