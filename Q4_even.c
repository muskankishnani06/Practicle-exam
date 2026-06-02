#include <stdio.h>

int main()
{
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter elements:\n");

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] ",i);
        scanf("%d", &arr[i]);
    }

    printf("Even elements: ");

    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) % 2 == 0)
        {
            printf("%d ", *(ptr + i));
        }
    }

    return 0;
}