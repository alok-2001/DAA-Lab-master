#include <stdio.h>
int findGCD(int, int);

int main()
{
    int array[] = {8, 4, 2, 16};
    int lcm = array[0];
    ;
    int gcd = array[0];

    for (int i = 1; i < 4; i++)
    {
        gcd = findGCD(array[i], lcm);
        lcm = (lcm * array[i]) / gcd;
    }

    printf("LCM: %d", lcm);
    printf("\nGCD: %d", gcd);
}

int findGCD(int a, int b)
{
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}