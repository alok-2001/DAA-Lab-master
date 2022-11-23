#include <stdio.h>

void merge(int A[], int lb, int mid, int ub)
{
    int i = lb;
    int j = mid + 1;
    int k = lb;
    int B[10] = {0};
    while (i <= mid && j <= ub)
    {
        if (A[i] <= A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            k++;
            j++;
        }
    }
    if (i > mid)
    {
        while (j <= ub)
        {
            B[k] = A[j];
            k++;
            j++;
        }
    }
    else
    {
        while (i <= mid)
        {
            B[k] = A[i];
            k++;
            i++;
        }
    }
    for (k = lb; k <= ub; k++)
    {
        A[k] = B[k];
    }
}

void mergeSort(int A[], int lb, int ub)
{
    int mid;
    if (lb < ub)
    {
        mid = (lb + ub) / 2;
        mergeSort(A, lb, mid);
        mergeSort(A, mid + 1, ub);
        merge(A, lb, mid, ub);
    }
}
int main()
{
    int A[10] = {10, 12, 56, 43, 5, 6, 325, 43, 35, 78};
    mergeSort(A, 0, 9);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}