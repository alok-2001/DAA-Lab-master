#include <stdio.h>

// int maxSumOfTwo(int arr, int n);
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int maxSumOfTwo(int arr[], int n)
{
    int sum = arr[n - 1] + arr[n - 2];
    return sum;
}
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}

int main()
{
    int arr[5] = {10, 20, 50, 40, 30};

    bubbleSort(arr, 5);
    printf("Max sum of two Numbers: %d", maxSumOfTwo(arr, 5));

    return 0;
}
