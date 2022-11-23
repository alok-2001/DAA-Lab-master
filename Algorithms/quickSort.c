#include <stdio.h>
void swap(int *A, int *B)
{
    int temp;
    temp = *A;
    *A = *B;
    *B = temp;
}
/**
 * It takes an array, a lower bound, and an upper bound, and returns the index of the pivot
 *
 * @param A The array to be sorted
 * @param lb lower bound
 * @param ub upper bound
 *
 * @return The index of the pivot element.
 */
int partition(int A[], int lb, int ub)
{
    int start = lb;
    int end = ub;
    int pivot = A[lb];

    while (start < end)
    {
        while (A[start] <= pivot)
        {
            start++;
        }
        while (A[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(&A[start], &A[end]);
        }
    }
    swap(&A[lb], &A[end]);
    return end;
}

/**
 * The quickSort function takes an array, a lower bound, and an upper bound as parameters. It then
 * calls the partition function to find the location of the pivot. It then calls itself recursively on
 * the lower half of the array and the upper half of the array
 *
 * @param A The array to be sorted
 * @param lb lower bound of the array
 * @param ub upper bound
 */
void quickSort(int A[], int lb, int ub)
{
    int loc;
    if (lb < ub)
    {
        loc = partition(A, lb, ub);
        quickSort(A, lb, loc - 1);
        quickSort(A, loc + 1, ub);
    }
}

int main()
{
    int A[10] = {5, 4, 7, 8, 2, 12, 4, 5, 654, 79};
    quickSort(A, 0, 9);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}