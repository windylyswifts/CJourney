#include <stdio.h>

void printer(int class, int weapon, int focus)
{
    if(class == 1)
    {
        printf("Class: Warrior!\n");

            if(weapon == 1){
                printf("Weapon: Sword!\n");
            }
            else{
                printf("Weapon: Axe\n");
            }
            if(focus == 1){
                printf("Focus: Attack\n");
                printf("Class Attributes: Health 150, Strength 120, Intelligence 40\n");
            }
            else{
                printf("Focus: Defense\n");
                printf("Class Attributes: Health 200, Strength 90, intelligence 40\n");
            }
    }
    else if(class == 2)
    {
        printf("Class: Mage!\n");

            if(weapon == 1){
                printf("Weapon: Staff!\n");
            }
            else{
                printf("Weapon: Wand\n");
            }
            if(focus == 1){
                printf("Focus: Attack\n");
                printf("Class Attributes: Health 150, Strength 120, Intelligence 40\n");
            }
            else{
                printf("Focus: Defense\n");
                printf("Class Attributes: Health 200, Strength 90, intelligence 40\n");
            }
    }

}


int main()
{
    int class, weapon, focus;
    printf("Choose Your Class: \n 1. Warrior\n 2. Mage \n 3. Rogue \n Enter your choice: ");
    scanf("%d", &class);
    printf("\n");
    printf("Choose your weapon: \n 1.Sword \n 2. Axe\n Enter Your Choice: ");
    scanf("%d", &weapon);
    printf("\n");
    printf("Enter your focus\n 1. Attack\n 2. Defense\n Enter Your Choice: ");
    scanf("%d", &focus);
    printf("\n\n");
    printf("Character Creation Complete!\n");

    printer(class, weapon, focus);


    return 0;
}