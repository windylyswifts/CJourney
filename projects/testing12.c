#include <stdio.h>

void menu(int answer, int n, int sum){
  do
{
  do{
    printf("Do you wish to know the following:\n");
    printf("\n1 for Sum of N");
    printf("\n2 for Even or Odd");
    printf("\n3 for Display ALl Even");
    printf("\n4 for Exit\n");
    printf("Your answer: ");
    scanf("%d", &answer);

    if(answer == 1)
      printf("%d\n", sum);
    if(answer == 2){
      if(sum % 2 == 0)
        printf("The Sum is Even\n");
      else
      printf("Odd\n");
    }
    if(answer == 3){
      for(int k = 1; k <= n; k++){
        if(k % 2 == 0)
          printf("%d\n", k);
      }
    }
    if(answer == 4)
      break;
  }while(answer != 1 && answer != 2 && answer != 3 && answer != 4) ;
  if(answer == 4){
    printf("Thank you for using my Syntax");
    break;
  }
} while(answer !=4);
}
int main(){
    int n = 4, sum= 0, i=1;
    int answer = 0, temp=2;

    printf("Input Your Sum: ");
    scanf("%d", &n);

    for(; i <= n; i++){
        sum += i;
    }
    printf("%d\n", sum);
    printf("==============================\n");

    menu(answer, n, sum);

  return 0;
}
