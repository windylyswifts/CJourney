#include <stdio.h>

//For cleanliness
void Newline()
{
    printf("\n");
}

//this is to identify if the values are true
void tautology(int p, int q, int r, int s)
{
    //Check if all variables are Possitve
    if (p > 0 && q > 0 && r > 0 && s > 0)
    {
        printf("all varaibles are positive\n");
    }
    else
    {
        printf("All/some of the variables are not positive\n");
    }
}

//this function will serve as the process to identify the intersection. I used nested loop to identify 
void intersection(int A[], int B[], int sizeA, int sizeB)
{
    //The first 'for' loop is for the set A and it will serve as the controller for how much iteration is needed
    for(int i = 0;i < sizeA; i++)
    {
        //the second loop is to determine whether or not the elements are the same
        for(int j = 0;j < sizeB;j++)
        {
            if(A[i] == B[j])
            {
                printf("%d ", A[i]);
                break;
            }
        }        
    }
}

int main()
{   
    //This topic is all about tautology
    int p, q, r, s;
    printf("Instructions: Check if all variables are positive, if so then its tautology\n");
    //This is just 
    Newline();

    printf("what will be the value of your p?: ");
    scanf("%d", &p);
    printf("what will be the value of your q?: ");
    scanf("%d", &q);
    printf("what will be the value of your r?: ");
    scanf("%d", &r);
    printf("what will be the value of your s?: ");
    scanf("%d", &s);

    Newline();

    //I called a function outside the main
    tautology(p, q, r, s);
    Newline();

    //This is another topic all about intersection but this is interactive but still has holes to cover
    printf("What is the intersection of both set A & B?\n");
    Newline();

    int iterationA;
    int iterationB;

    printf("How many elements are there from set A?: ");
    scanf("%d", &iterationA);
    int A[iterationA];

    for(int m = 0; m < iterationA; m++)
    { 
        printf("Enter your number: ");
        scanf("%d", &A[m]);
    }

    printf("How many elements are there from set B?: ");
    scanf("%d", &iterationB);   
    int B[iterationB];
    for(int n = 0; n < iterationB; n++)
    {
        printf("Enter your number: ");
        scanf("%d", &B[n]);
    }

    int sizeA = sizeof(A)/sizeof(A[0]), sizeB = sizeof(B)/sizeof(B[0]);

    intersection(A, B, sizeA, sizeB);

    return 0;
}