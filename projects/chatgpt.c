#include <stdio.h>

// Function to find the intersection of two sets
int intersection(int A[], int B[], int sizeA, int sizeB, int result[]) {
    int count = 0;  // Keeps track of how many elements are in the result array

    for (int i = 0; i < sizeA; i++) 
    {
        for (int j = 0; j < sizeB; j++) 
        {
            if (A[i] == B[j]) 
            {  
                // Check if the element is already in result to avoid duplicates
                int alreadyExists = 0;
                for (int k = 0; k < count; k++) 
                {
                    if (result[k] == A[i]) 
                    {
                        alreadyExists = 1;
                        break;
                    }
                }

                if (!alreadyExists) {  // If it's not a duplicate, add it
                    result[count++] = A[i];
                }
            }
        }
    }
    return count;  // Return the number of elements in the intersection
}

int main() {
    printf("What is the intersection of both sets A & B?\n");

    int iterationA, iterationB;

    printf("How many elements are there in set A?: ");
    scanf("%d", &iterationA);
    int A[iterationA];

    for (int m = 0; m < iterationA; m++) {
        printf("Enter your number: ");
        scanf("%d", &A[m]);
    }

    printf("How many elements are there in set B?: ");
    scanf("%d", &iterationB);
    int B[iterationB];

    for (int n = 0; n < iterationB; n++) {
        printf("Enter your number: ");
        scanf("%d", &B[n]);
    }

    int result[iterationA < iterationB ? iterationA : iterationB];  // Intersection size can't be larger than the smaller set
    int intersectionSize = intersection(A, B, iterationA, iterationB, result);

    // Printing the intersection result
    printf("Intersection elements: ");
    if (intersectionSize == 0) {
        printf("No common elements.\n");
    } else {
        for (int i = 0; i < intersectionSize; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
    }

    return 0;
}
