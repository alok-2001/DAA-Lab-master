#include <stdio.h>

int main()
{
    int n, i, j;
    printf(" Enter the Number of Activities : ");
    scanf("%d", &n);
    int start[n];
    int finish[n];
    for (i = 0; i < n; i++)
    {
        printf(" Enter Start Time of Activity[%d] : ", i);
        scanf("%d", &start[i]);
        printf(" Enter End Time of Activity[%d] : ", i);
        scanf("%d", &finish[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (finish[j] > finish[j + 1])
            {
                int temp = finish[j];
                finish[j] = finish[j + 1];
                finish[j + 1] = temp;

                int tmp = start[j];
                start[j] = start[j + 1];
                start[j + 1] = tmp;
            }
        }
    }

    printf("Following activities are selected \t");
    int p = 0;
    printf("%d\t", p);
    for (j = 1; j < n; j++)
    {
        if (start[j] >= finish[p])
        {
            printf("%d\t", j);
            p = j;
        }
    }
    return 0;
}