#include <stdio.h>

int main()
{
    int n;

    // Prompting user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declaring the array with user-defined size
    int arr[n];

    // Taking input for the array elements
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Displaying the array elements
    printf("The elements of the array are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
