// Searching from an array using Binary Search Algorithm
#include <stdio.h>
#include <conio.h>
#define MAX 5

void binary_search(int arr[], int s)
{
    int start = 0, end = MAX - 1, mid, found = 0;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == s)
        {
            printf("Element found at position %d\n", mid + 1);
            found = 1;
            break;
        }
        else if (arr[mid] > s)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    if (found == 0)
    {
        printf("Element not found\n");
    }
}

int main()
{
    int arr[MAX], i, s;

    printf("Enter the elements of array in ascending order:\n");
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number you want to search:\n");
    scanf("%d", &s);

    binary_search(arr, s);

    getch();

    return 0;
}
