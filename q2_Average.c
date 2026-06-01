#include <stdio.h>

float average(int arr[3][3])
{
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
    }

    return sum / 9.0;
}

int main()
{
    int arr[3][3];

    printf("Enter 9 elements:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Average = %.2f", average(arr));

    return 0;
}