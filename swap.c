#include <stdio.h>

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 1, j = 3;

    printf("Array before swapping:\n");
    printArray(arr, n);

    swap(arr, i, j);

    printf("\nArray after swapping:\n");
    printArray(arr, n);

    return 0;
}
