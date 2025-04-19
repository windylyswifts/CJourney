#include <stdio.h>

int main()
{
    int num = 50, x = 2, y =-2;
    if(num > 1)
        if(num!=x&&x!=y)
            if(x*-1==y)
                if(num/25 == x || y == x)
                    printf("Confuse ..");
                else{
                    x++;
                    y++;
                }
            else
                printf("Cat?\n");
                
    return 0;
}