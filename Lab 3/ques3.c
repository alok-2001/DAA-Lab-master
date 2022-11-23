#include <stdio.h>

int main()
{
    int n, sum = 0;
    int sum1 = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        sum += a[i];
        sum1 += a[n - i - 1];
    }

    if (sum1 > sum)
        sum = sum1;

    printf("\nMax sum of contiguous proper subarray: %d", sum);

    return 0;
}