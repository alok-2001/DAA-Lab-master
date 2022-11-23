#include <stdio.h>
#include <math.h>
int isPalindrome(int num)
{
    int pnum = 0, num1 = num, i = 0;
    while (num1 != 0)
    {
        num1 = num1 / 10;
        i++;
    }
    i--;
    num1 = num;

    while (num1 != 0)
    {
        int p = num1 % 10;
        pnum += (p * pow(10, i)) + 0.5;
        i--;
        num1 = num1 / 10;
    }

    if (pnum == num)
        return 1;
    else
        return 0;
}

int main()
{
    int n, max = 0;
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
        int num = 0;
        for (int j = i + 1; j < n; j++)
        {

            num = 0;
            for (int k = i; k <= j; k++)
            {

                num = num * 10 + a[k];
            }
            int result = isPalindrome(num);
            if (result == 1)
            {
                if (num > max)
                    max = num;
            }
        }
    }

    printf("\nLargest palindrome subarray: %d", max);
}