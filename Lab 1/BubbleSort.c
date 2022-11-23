#include <stdio.h>

void bubbleSort(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1)
    }
}

int main()
{
    int n;
    printf("Enter size of Array: ");
    scanf("%d", &n);
    int A[n];

    // printf("\nUnsorted Array: ");
    // display(A, n);
    printf("\nEnter %d elements in Array: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("\nSorted Array: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] > A[j])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nA[%d]: %d", i, A[i]);
    }

    // bubbleSort(A, n);
    // display(A, 5);
    return 0;
}