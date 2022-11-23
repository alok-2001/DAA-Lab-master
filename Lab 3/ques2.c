#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Total no. of subsets: %.1f\n", (pow((double)2, (double)n)));
    printf("Total no. proper of subsets: %.1f\n", (pow((double)2, (double)n)) - 1);

    int snum = 0;
    while (snum < pow(2, n))
    {
        for (int i = 0; i < n; ++i)
        {

            if ((snum & (1 << i)) != 0)
            {
                printf("%d ", a[i]);
            }
        }
        printf("\n");
        ++snum;
    }
}