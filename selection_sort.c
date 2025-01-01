/*
 * Selection Sort Algorithm
 *
 * This function sorts an array in ascending order using the selection sort algorithm.
 * 
 * Parameters:
 * - arr: Pointer to the array to be sorted.
 * - size: The number of elements in the array.
 * 
 * How it works:
 * - The array is divided into two parts: the sorted part and the unsorted part.
 * - In each iteration, the smallest element from the unsorted part is selected 
 *   and swapped with the first element of the unsorted part, growing the sorted part.
 * 
 * Time Complexity:
 * - Best, Average, and Worst Case: O(n^2) — The algorithm always performs n(n-1)/2 comparisons, 
 *   regardless of the initial order of elements.
 * 
 * Space Complexity:
 * - O(1) — The algorithm sorts the array in-place without using additional memory.
 * 
 * Note:
 * - Although Selection Sort is not the most efficient sorting algorithm for large datasets,
 *   it is simple and useful for educational purposes or when memory usage is a critical concern.
 */

#include <stdio.h>

int *selectionSort(int *arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        if (minIndex != i)
        {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
    return (arr);
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