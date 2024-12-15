#include <stddef.h>
#include <stdlib.h>
#include <limits.h>

int findSmallest(int *arr, int len)
{
    int smallest = INT_MAX;
    int smallest_index = -1;
    int i = 0;
    while (i < len)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            smallest_index = i;
        }
        i++;
    }
    return (smallest_index);
}

int *selectionSort(int *arr, int len)
{
    int *new_arr = (int *)malloc(len * sizeof(int));
    if (!new_arr)
        return (NULL);
    int i = 0;
    while (i < len)
    {
        int smallest = findSmallest(arr, len);
        new_arr[i] = arr[smallest];
        arr[smallest] = INT_MAX;
        i++;
    }
    return (new_arr);
}

#include <stdio.h>

int main()
{
    int arr[] = {1, 9, 90, 970, 890, 88, 2, 0};
    int len = sizeof(arr) / sizeof(arr[0]);
    int *sorted_arr = selectionSort(arr, len);
    for (int i = 0; i<len; i++)
    {
        printf("%d\n", sorted_arr[i]);
    }
}