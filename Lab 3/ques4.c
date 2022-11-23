#include <stdio.h>

int main()
{
    int a[5];
    int n = 5;
    int currSum = 0;
    int maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        currSum = currSum + a[i];
        if (currSum > maxSum)
        {
            maxSum = currSum;
        }
        if (a[i] < 0)
        {
            currSum = 0;
        }
    }
    printf("Max Sum: %d", maxSum);
    return 0;
}