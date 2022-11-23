#include <stdio.h>
int main()
{
    int n, n1, rows, cols, a[100][100], b[100][100], z[100][100], sum[100][100], i, j;
    printf(" Enter Number of Matrices you want to enter : ");
    scanf("%d", &n);

    // printf("Enter the number of rows: ");
    scanf("%d", &rows);
    // printf("Enter the number of columns: ");
    scanf("%d", &cols);

    printf("\n\t Enter matrix a :\n");
    for (i = 0; i < rows; ++i)
    {
        for (j = 0; j < cols; ++j)
        {
            printf(" Enter Element : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n\t Enter matrix b :\n");
    for (i = 0; i < rows; ++i)
    {
        for (j = 0; j < cols; ++j)
        {
            printf(" Enter Element : ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < rows; ++i)
    {
        for (j = 0; j < cols; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    n1 = n - 2;
    int d = 3;
    while (n1 > 0)
    {
        printf("\n\t Enter Elements in Matrix %d :\n", d);
        for (i = 0; i < rows; ++i)
        {
            for (j = 0; j < cols; ++j)
            {
                printf(" Enter Element : ", i + 1, j + 1);
                scanf("%d", &z[i][j]);
            }
        }
        for (i = 0; i < rows; ++i)
        {
            for (j = 0; j < cols; ++j)
            {
                sum[i][j] = sum[i][j] + z[i][j];
            }
        }
        n1 = n1 - 1;
        d = d + 1;
    }
    printf("\n\n\tSum of Matrices : \n");
    for (i = 0; i < rows; ++i)
    {
        for (j = 0; j < cols; ++j)
        {
            printf("%d   ", sum[i][j]);
            if (j == cols - 1)
            {
                printf("\n\n");
            }
        }
    }
    return 0;
}