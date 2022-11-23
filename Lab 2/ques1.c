/*Write a program to compare the time of execution of linear search and binary search.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int linearSearch(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int a[], int beg, int end, int val)
{
    int mid;
    if (end >= beg)
    {
        mid = (beg + end) / 2;
        if (a[mid] == val)
        {
            return mid + 1;
        }
        else if (a[mid] < val)
        {
            return binarySearch(a, mid + 1, end, val);
        }
        else
        {
            return binarySearch(a, beg, mid - 1, val);
        }
    }
    return -1;
}
int main()
{
    clock_t start, end;
    int n, key;
    double cpuTimeLinear, cpuTimeBinary;

    printf("No of elements in Array: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        printf("\nInput A[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter an element you want to search: ");
    scanf("%d", &key);

    // Linear Searching
    printf("\nLinear Search\n");
    start = clock();

    if (linearSearch(a, n, key) != -1)
    {
        printf("\tElement found at index %d: ", linearSearch(a, n, key));
    }
    else
    {
        printf("\tItem not found");
    }
    end = clock();
    cpuTimeLinear = ((double)(end - start) / CLOCKS_PER_SEC) * 1000;
    printf("\tCPU execution time for Linear Search: %f\n\n", cpuTimeLinear);

    // Binary Searching
    printf("\nBinary Search\n");
    start = clock();
    if (binarySearch(a, 0, n - 1, key) == -1)
    {
        printf("\tItem not found!!");
    }
    else
    {
        printf("\tElement found at index: %d", (binarySearch(a, 0, n - 1, key)) - 1);
    }
    end = clock();
    cpuTimeBinary = ((double)(end - start) / CLOCKS_PER_SEC) * 1000;

    // binarySearch(a, 0, sizeof(a), (0 + sizeof(a) / 2));
    printf("\tCPU execution time for Binary Search: %f", cpuTimeBinary);
    int difference = cpuTimeLinear - cpuTimeBinary;
    printf("\n\n Time difference: %d", difference);
    return 0;

    // binary search
    //  int binarySearch(int a[], int beg, int end, int val)
    //  {
    //      int mid;
    //      if (end >= beg)
}