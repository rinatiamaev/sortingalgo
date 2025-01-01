/*
 * Binary Search Algorithm
 *
 * This function performs a binary search on a sorted array to find the target value.
 * 
 * Parameters:
 * - arr: Pointer to the sorted array.
 * - size: The number of elements in the array.
 * - target: The value to search for.
 * 
 * Returns:
 * - The index of the target if found.
 * - -1 if the target is not present in the array.
 * 
 * Time Complexity:
 * - Best Case: O(1) — When the target is found at the middle index on the first comparison.
 * - Average and Worst Case: O(log n) — Each step reduces the search range by half.
 * 
 * Space Complexity:
 * - O(1) — No additional space is used apart from a few variables.
 */

#include <stdio.h>

int binary_search(int *arr, int num, int len)
{
    int start = 0;
    int end = len - 1;
    while (start <= end)
    {
        int mid = (start + end)/ 2;
        if (arr[mid] == num)
            return (arr[mid]);
        else if (arr[mid]<num)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return (-1);
}
int main()
{
    
    int arr[] = {1, 5, 8, 18, 20, 90, 130};
    int len = sizeof(arr)/sizeof(arr[0]);
    printf("%d", binary_search(arr, 901, len));
}