// Searching from an array using Linear Search Algorithm
#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[5], i, s;
    int found = 0;

    printf("Enter the elements of array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number you want to search:\n");
    scanf("%d", &s);

    for (i = 0; i < 5; i++)
    {
        if (arr[i] == s)
        {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Element not found\n");
    }

    getch();

    return 0;
}