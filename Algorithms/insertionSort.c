#include <stdio.h>

void insertionSort(int A[], int size)
{
    int temp;
    int j;
    for (int i = 1; i < size; i++)
    {
        temp = A[i];
        j = i - 1;
        /* Comparing the value of the current element with the previous element. If the previous
        element is greater than the current element, then it swaps the two elements. */
        while (j >= 0 && A[j] > temp)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = temp;
    }
}

int main()
{
    int A[10] = {5, 4, 7, 8, 2, 12, 4, 5, 654, 79};
    insertionSort(A, 9);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}