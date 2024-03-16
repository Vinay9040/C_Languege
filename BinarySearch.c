#include<stdio.h>

int binarysearch(int arr[], int si, int ei, int key)
{
    if (si <= ei)
    {
        int mid = si + (ei - si) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            return binarysearch(arr, si, mid - 1, key);
        }
        else
        {
            return binarysearch(arr, mid + 1, ei, key);
        }
    }
    return -1; 
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int key = 1;
    int n = sizeof(arr) / sizeof(int);
    int temp = binarysearch(arr, 0, n - 1, key);
    if (temp == -1)
    {
        printf("key not found !\n");
    }
    else
    {
        printf("the element found at index : %d\n", temp);
    }

    return 0;
}