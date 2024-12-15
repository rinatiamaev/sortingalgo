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