// C Program for Bubble Sort
#include <stdio.h>
struct array
{
    int *data;
    int length;
};

// Bubble sort function
void bubble_sort(struct array *arr)
{
    int i, j, temp;

    for (i = 0; i < arr->length - 1; i++)
    {
        for (j = 0; j < arr->length - i - 1; j++)
        {
            if (arr->data[j] > arr->data[j + 1])
            {
                temp = arr->data[j];
                arr->data[j] = arr->data[j + 1];
                arr->data[j + 1] = temp;
            }
        }
    }
}

int main()
{
    // Create an array and initialize it
    int arr_data[] = {5, 2, 8, 12, 1};
    int arr_length = sizeof(arr_data) / sizeof(arr_data[0]);

    // Create an instance of the array struct
    struct array arr;
    arr.data = arr_data;
    arr.length = arr_length;

    // Call the bubble_sort function
    bubble_sort(&arr);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.data[i]);
    }
    printf("\n");

    return 0;
}
