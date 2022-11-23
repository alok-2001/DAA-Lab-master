#include <stdio.h>

void insertionSort(int a[], int n)
{
    printf("\nPerforming Insertion Sort...\n");
    for (int i = 1; i < n; i++)
    {
        int currentElement = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > currentElement)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = currentElement;
    }
}
/**
 * MergeSort(a, l, h)
 *
 * If the size of the array is less than 16, then use insertion sort. Otherwise, recursively sort the
 * left half of the array, recursively sort the right half of the array, and then merge the two halves
 *
 * @param a The array to be sorted
 * @param l left index of the sub-array of arr to be sorted
 * @param m the size of the array
 * @param h the highest index of the array
 */
void merge(int a[], int l, int m, int h)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = h - m;
    int p[n1], q[n2];
    for (i = 0; i < n1; i++)
    {
        p[i] = a[l + i];
    }
    for (j = 0; j < n2; j++)
    {
        q[j] = a[m + 1 + j];
    }

    i = 0, j = 0, k = l;

    while (i < n1 && j < n2)
    {
        if (p[i] <= q[j])
        {
            a[k] = p[i];
            i++;
        }
        else
        {
            a[k] = q[j];
            j++;
        }
        k++;
    }

    while (i < n1)
        a[k++] = p[i++];
    while (j < n2)
        a[k++] = q[j++];
}

/**
 * MergeSort(a, l, h) = MergeSort(a, l, mid) + MergeSort(a, mid + 1, h) + merge(a, l, mid, h)
 *
 * @param a the array to be sorted
 * @param l the leftmost index of the array
 * @param h the highest index of the array
 *
 * @return the sorted array.
 */
void MergeSort(int a[], int l, int h)
{
    int n = h - l + 1;
    if (n <= 16)
    {
        insertionSort(a, n);
        return;
    }
    if (l < h)
    {
        int mid = (l + h) / 2;
        MergeSort(a, l, mid);
        MergeSort(a, mid + 1, h);
        merge(a, l, mid, h);
    }
}

void print(int a[], int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    MergeSort(a, 0, n - 1);
    print(a, n);
}