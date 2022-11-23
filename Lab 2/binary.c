int binarySearch(int a[], int beg, int end, int val)
{
    int mid;
    if (end >= beg)
    {
        mid = (beg + end) / 2;
        /* if the item to be searched is present at middle */
        if (a[mid] == val)
        {
            return mid + 1;
        }
        /* if the item to be searched is smaller than middle, then it can only be in left subarray */
        else if (a[mid] < val)
        {
            return binarySearch(a, mid + 1, end, val);
        }
        ws3
            /* if the item to be searched is greater than middle, then it can only be in right subarray */
            else
        {
            return binarySearch(a, beg, mid - 1, val);
        }
    }
    return -1;
}
