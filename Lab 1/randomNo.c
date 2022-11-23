#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{
    srand(0);
    int n;
    printf("Number of random numbers: ");
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        A[i] = rand();
    }
    bubbleSort(A, n);
    for (int i = 0; i < n; i++)
    {
        printf("\nA[%d]: %d", i, A[i]);
    }
    return 0;
}