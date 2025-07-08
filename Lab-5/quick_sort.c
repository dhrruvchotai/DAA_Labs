#include <stdio.h>

int pivot(int arr[], int n, int low, int high)
{
    int pivot = arr[low];
    int left = low + 1;
    int right = high;

    while (left <= right)
    {
        while (left <= right && arr[left] < pivot)
            left++;
        while (left <= right && arr[right] > pivot)
            right--;

        if (left < right)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }

    // Swap pivot with arr[right]
    int temp = arr[low];
    arr[low] = arr[right];
    arr[right] = temp;

    return right;
}

void quickSort(int arr[], int n, int low, int high)
{
    if (low < high)
    {
        printf("Quick\n");
        int pivotIndex = pivot(arr, n, low, high);
        printf("%d \n", pivotIndex);
        quickSort(arr, n, low, pivotIndex - 1);
        printf("vachhe\n");
        quickSort(arr, n, pivotIndex + 1, high);
    }
}

int main()
{
    int arr[] = {12, 34, 2, 5, 11, 56, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Hello\n");
    quickSort(arr, n, 0, n - 1);
    printf("Bye\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
