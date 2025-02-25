// C Program for Quick Sort
#include <stdio.h>

// Function to sort an array using quick sort
void quick_sort(int arr[], int low, int high)
{
    int i = low, j = high, temp;
    int pivot = arr[(low + high) / 2];

    while (i <= j)
    {
        while (arr[i] < pivot)
            i++;

        while (arr[j] > pivot)
            j--;

        if (i <= j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    if (low < j)
        quick_sort(arr, low, j);

    if (i < high)
        quick_sort(arr, i, high);
}

// Driver code
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quick_sort(arr, 0, n - 1);
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}