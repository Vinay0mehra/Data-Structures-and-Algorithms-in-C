#include <stdio.h>
#include <stdlib.h>
int main()
{
    int stack[5], top = -1, ch, data;
    while (1)
    {
        printf("\n1.Push\n2.Pop\n3.Peek\n4.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (top == 4)
            {
                printf("Stack overflow\n");
                break;
            }
            else
            {
                printf("Enter data: ");
                scanf("%d", &data);
                stack[++top] = data;
                break;
            }
        case 2:
            if (top == -1)
            {
                printf("Stack underflow\n");
                break;
            }
            data = stack[top--];
            printf("Popped data: %d\n", data);
            break;
        case 3:
            if (top == -1)
            {
                printf("Stack underflow\n");
                break;
            }
            else
            {
                printf("Topmost element: %d\n", stack[top]);
                break;
            }
        case 4:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}
