#include <stdio.h>

int main()
{
    int n, gcd;
    printf("Enter how many no.s u want to find gcd : ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter your numbers below :- \n ");
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter your %d number = ", i + 1);
        scanf("%d", &arr[i]);
    }
    gcd = arr[0];
    int j = 1;
    while (j < n)
    {
        if (arr[j] % gcd == 0)
        {
            j++;
        }
        else
        {
            gcd = arr[j] % gcd;
            i++;
        }
    }
    return 0;
}