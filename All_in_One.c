//Que-1

#include <stdio.h>

int main()
{

    int sub1, sub2, sub3, sub4, sub5, total, Persentage, grade;

    printf("enter marks of sub1 ");
    scanf("%d", &sub1);

    printf("enter marks of sub2 ");
    scanf("%d", &sub2);

    printf("enter marks of sub3 ");
    scanf("%d", &sub3);

    printf("enter marks of sub4 ");
    scanf("%d", &sub4);

    printf("enter marks of sub5 ");
    scanf("%d", &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;

    printf("Total of all subject is %d", total);

    Persentage = total / 5;

    printf("\n Persentage is :-%d", Persentage);

    if (Persentage > 70)
    {

        printf("\nYour grade is A");
    }
    else if (Persentage > 60)
    {

        printf("\nYour grade is B");
    }
    else if (Persentage > 50)
    {

        printf("\nyour grade is c");
    }
    else if (Persentage > 40)
    {

        printf("\nyour grade is D");
    }
    else if (Persentage < 35)
    {

        printf("\nyour grade is E");
    }
    else
    {

        printf("\nyou are fail");
    }

    return 0;
}

//Que-2

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

//Que-3

#include <stdio.h>

void printOdd(int arr[], int n)
{
    printf("Odd elements: ");

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] ", i);
        scanf("%d", &arr[i]);
    }

    printOdd(arr, n);

    return 0;
}

//Que-4

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

// Que-5

#include <stdio.h>

int main()
{
    int n = 10;

    for (int i = n; i >= 6; i--)
    {

        for (int s = i; s > 6; s--)
        {
            printf("    ");
        }

        for (int j = i; j <= n; j++)
        {
            printf("%2d  ", j);
        }
        printf("\n");
    }

    return 0;
}