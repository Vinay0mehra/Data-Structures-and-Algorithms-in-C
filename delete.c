// Delete an element from an array
#include <stdio.h>
#include <stdlib.h>

struct array
{
    int *data;
    int length;
};

struct array *create_array(int length)
{
    struct array *arr = (struct array *)malloc(sizeof(struct array));
    arr->data = (int *)malloc(length * sizeof(int));
    arr->length = length;
    return arr;
}

void delete_element(struct array *arr, int index)
{
    if (index < 0 || index >= arr->length)
    {
        printf("Index out of bounds\n");
        return;
    }

    for (int i = index; i < arr->length - 1; i++)
    {
        arr->data[i] = arr->data[i + 1];
    }
    free(arr->data + index);

    arr->length--;

    printf("Element deleted successfully\n");
}

int main()
{
    struct array *arr = create_array(5);

    arr->data[0] = 1;
    arr->data[1] = 2;
    arr->data[2] = 3;
    arr->data[3] = 4;
    arr->data[4] = 5;

    printf("Array before deletion:\n");
    for (int i = 0; i < arr->length; i++)
    {
        printf("%d ", arr->data[i]);
    }
    printf("\n");

    delete_element(arr, 2);

    printf("Array after deletion:\n");
    for (int i = 0; i < arr->length; i++)
    {
        printf("%d ", arr->data[i]);
    }
    printf("\n");

    return 0;
}
