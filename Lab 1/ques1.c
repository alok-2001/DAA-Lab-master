#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubblesort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nSorted Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void selectionsort(int a[], int n)
{
    int i, j, position, swap;
    for (i = 0; i < (n - 1); i++)
    {
        position = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[position] > a[j])
                position = j;
        }
        if (position != i)
        {
            swap = a[i];
            a[i] = a[position];
            a[position] = swap;
        }
    }
    printf("\nSorted Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    srand(time(0));
    int choice, n;
    printf("Enter no of elements in array: ");
    scanf("%d", &n);
    int a[n];
    printf("Press\n\t1 - Input Random Numbers\n\t2 - User Input\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        // printf("\nEnter no. of random numbers: ");
        // scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            int r = rand() % 1000 + 1;
            printf("%d\n", r);
            a[i] = r;
        }
        printf("\nSort using bubble sort\n");
        bubblesort(a, n);

        printf("\nSort using selection sort\n");
        selectionsort(a, n);
        break;

    case 2:
        // printf("Enter no. of elements: ");
        // scanf("%d",&n);
        printf("Enter %d elements: ", n);
        for (int i = 0; i < n - 1; i++)
        {
            scanf("%d", &a[i]);
        }

        printf("\nSort using bubble sort\n");
        bubblesort(a, n);

        printf("\nSort using selection sort\n");
        selectionsort(a, n);
        break;

    default:
        printf("Invalid Option");
    }
}