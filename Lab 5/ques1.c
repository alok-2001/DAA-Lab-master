#include <stdio.h>
#include <time.h>

void merge(int a[], int beg, int mid, int end)
{
    int i, j, k;
    int n1 = mid - beg + 1;
    int n2 = end - mid;

    int LeftArray[n1], RightArray[n2]; // temporary arrays

    /* copy data to temp arrays */
    for (int i = 0; i < n1; i++)
        LeftArray[i] = a[beg + i];
    for (int j = 0; j < n2; j++)
        RightArray[j] = a[mid + 1 + j];

    i = 0;   /* initial index of first sub-array */
    j = 0;   /* initial index of second sub-array */
    k = beg; /* initial index of merged sub-array */

    while (i < n1 && j < n2)
    {
        if (LeftArray[i] <= RightArray[j])
        {
            a[k] = LeftArray[i];
            i++;
        }
        else
        {
            a[k] = RightArray[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        a[k] = LeftArray[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        a[k] = RightArray[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int beg, int end)
{
    if (beg < end)
    {
        int mid = (beg + end) / 2;
        mergeSort(a, beg, mid);
        mergeSort(a, mid + 1, end);
        merge(a, beg, mid, end);
    }
}

void printArray(int a[], int n1)
{
    int i;
    for (i = 0; i < n1; i++)
        printf("A[%d]: %d \n", i, a[i]);
    printf("\n");
}

int main()
{

    clock_t start, end;
    double timeA1, timeA2, timeA3, timeA4;
    int n1 = 500, n2 = 1000, n3 = 5000, n4 = 10000;

    int a1[n1];
    start = clock();
    // Ascending order for n = 500
    for (int i = 0; i < n1; i++)
    {
        int r = i + 1;
        a1[i] = r;
    }
    mergeSort(a1, 0, n1 - 1);
    printArray(a1, n1);

    // Descending order for n = 500
    for (int i = n1; i > 0; i--)
    {
        int r = i + 1;
        a1[i] = r;
    }
    end = clock();
    timeA1 = (double)(end - start) / CLOCKS_PER_SEC;

    // Ascending order for n = 1000
    start = clock();
    int a2[n2];
    for (int i = 0; i < n2; i++)
    {
        int r = i + 1;
        a2[i] = r;
    }

    mergeSort(a2, 0, n2 - 1);
    printArray(a2, n2);

    // Descending order for n = 1000
    for (int i = n2; i > 0; i--)
    {
        int r = i + 1;
        a2[i] = r;
    }
    mergeSort(a2, 0, n2 - 1);
    printArray(a2, n2);
    end = clock();
    timeA2 = (double)(end - start) / CLOCKS_PER_SEC;

    // Ascending order for n = 5000
    int a3[n3];
    start = clock();
    for (int i = 0; i < n3; i++)
    {
        int r = i + 1;
        a3[i] = r;
    }

    mergeSort(a3, 0, n3 - 1);
    printArray(a3, n3);
    // Descending Order for n = 5000
    for (int i = n3; i > 0; i--)
    {
        int r = i + 1;
        a3[i] = r;
    }
    mergeSort(a3, 0, n3 - 1);
    printArray(a3, n3);
    end = clock();
    timeA3 = (double)(end - start) / CLOCKS_PER_SEC;

    int a4[n4];
    start = clock();

    // Ascending order Case for n = 10000
    for (int i = 0; i < n4; i++)
    {
        int r = i + 1;
        a4[i] = r;
    }
    mergeSort(a4, 0, n4 - 1);
    printArray(a4, n4);

    // Descending order Case for n = 10000
    for (int i = n4; i > 0; i--)
    {
        int r = i - 1;
        a4[i] = r;
    }
    mergeSort(a4, 0, n4 - 1);
    printArray(a4, n4);

    end = clock();
    timeA4 = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Time taken to sort 500 random numbers: %f seconds\n", timeA1);
    printf("Time taken to sort 1000 random numbers: %f seconds\n", timeA2);
    printf("Time taken to sort 5000 random numbers: %f seconds\n", timeA3);
    printf("Time taken to sort 10000 random numbers: %f seconds\n", timeA4);

    return 0;
}