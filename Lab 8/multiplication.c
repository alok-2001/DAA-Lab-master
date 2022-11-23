#include <stdio.h>

int multiplyTwoInteger(int m, int n)
{
    if (n == 0)
    {
        return 0;
    }
    return m + multiplyTwoInteger(m, n - 1);
}

int main()
{
    int m = 10, n = 2;

    printf("%d", multiplyTwoInteger(m, n));

    return 0;
}