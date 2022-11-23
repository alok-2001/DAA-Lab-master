#include <stdio.h>

int binarySearch(int arr[], int size, int key)
{
    int mid;
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int size = 11;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key;
    printf("Enter a key you want to search: ");
    scanf("%d", &key);

    if (binarySearch(arr, size, key) == -1)
    {
        printf("Element not found");
    }

    printf("Element found at index %d: ", binarySearch(arr, size, key));
    return 0;
}