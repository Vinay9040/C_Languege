#include <stdio.h>

int Lsearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 1, 66, 4, 7, 3, 8, 4, 0, 4};
    int key = 7;
    int n = sizeof(arr) / sizeof(int);
    int temp = Lsearch(arr, n, key);
    if (temp == -1)
    {
        printf("key not found !\n");
    }
    printf("the element found at index : %d\n", temp);
    return 0;
}