#include <stdio.h>

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int arr1[] = {1, 2, 3, 4, 5};

    int arr2[5];
    for(int i = 0; i < 5; i++){
        arr2[i] = i * 2;
        printf("%d\n", arr2[i]);
    }
    

    return 0;
}