#include <stdio.h>

int **addTwoArray(int A[5][5], int B[5][5])
{
    int m = 5, no = 5;
    int C[m][no];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < no; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    return C;
}

int main()
{
    int m = 5, n = 5;
    int no;
    printf("Enter Number of Matrix you want to enter: ");
    scanf("%d", &no);
    int A[m][n];
    int B[m][n];
    int **sum[m][n];
    int i = 0;
    while (i != no)
    {
        printf("Enter Matrix A: ");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < no; j++)
            {
                printf("Enter Element: %d %d", i + 1, j + 1);
                scanf("%d", &A[i][j]);
            }
        }

        printf("\nEnter Matrix B: ");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < no; j++)
            {
                printf("Enter Element: %d %d", i + 1, j + 1);
                scanf("%d", &B[i][j]);
            }
        }

        **sum = addTwoArray(A, B);
        i++;
    }
    printf("Sum of Matrices") for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}