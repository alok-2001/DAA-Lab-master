#include <stdio.h>
#define N 3

void getcofactor(int A[N][N], int temp[N][N], int p, int q, int n)
{
    int i = 0, j = 0;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row != p && col != q)
            {
                temp[i][j++] = A[row][col];
                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}
int determinant(int A[N][N], int n)
{
    int D = 0;
    if (n == 1)
    {
        return A[0][0];
    }
    int temp[N][N];
    int sign = 1;
    for (int f = 0; f < n; f++)
    {
        getcofactor(A, temp, 0, f, n);
        D += sign * A[0][f] * determinant(temp, n - 1);
        sign = -sign;
    }
    return D;
}

void adjoint(int A[N][N], int ad[N][N])
{
    int sign = 1;
    int temp[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            getcofactor(A, temp, i, j, N);
            sign = ((i + j) % 2 == 0) ? 1 : -1;
            ad[j][i] = (sign) * (determinant(temp, N - 1));
        }
    }
}

void display(int dis[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", dis[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr[N][N];
    printf("Enter the values of the matrix\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int adj[N][N];
    printf("The input matrix is \n");
    display(arr);
    printf("The adjoint of the matrix is \n");
    adjoint(arr, adj);
    display(adj);
}