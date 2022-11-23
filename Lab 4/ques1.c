#include <stdio.h>
int Max(int a[], int index, int l)
{
    int max;
    if (l - 1 == 0)
    {
        return a[index];
    }
    if (index >= l - 2)
    {
        if (a[index] > a[index + 1])
            return a[index];
        else
            return a[index + 1];
    }

    max = Max(a, index + 1, l);

    if (a[index] > max)
        return a[index];
    else
        return max;
}

int Min(int a[], int index, int l)
{
    int min;
    if (l - 1 == 0)
    {
        return a[index];
    }
    if (index >= l - 2)
    {
        if (a[index] < a[index + 1])
            return a[index];
        else
            return a[index + 1];
    }

    min = Min(a, index + 1, l);

    if (a[index] < min)
        return a[index];
    else
        return min;
}
int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter A[%d] element: ", i);
        scanf("%d", &a[i]);
    }
    printf("Max element in array: %d", Max(a, 0, n));
    printf("\nMin element in array:%d", Min(a, 0, n));
    return 0;
}