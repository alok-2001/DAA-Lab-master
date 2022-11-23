#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    int a[4] = {-1, 4, 7, 2};
    int n = 4;
    int sum = 0;
    int maxSum = INT_MIN;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum = sum + a[k];
                printf("%d ", a[k]);
            }
            count++;
            if (sum > maxSum)
            {
                maxSum = sum;
            }
            printf("\n");
        }
    }
    printf("Max Sum: %d", maxSum);
    printf("\nTotal Subarrays: %d", count);
    return 0;
}