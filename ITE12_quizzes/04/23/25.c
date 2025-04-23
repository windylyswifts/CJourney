#include  <stdio.h>

int somecode(int n){
    if(n<3)
        return n * 10;
    else if(n > 3)
        return n + somecode(n-2);
    else
        return n + somecode(n-3);
}


int main(){
    printf("%d", somecode(8));

    return 0;
}