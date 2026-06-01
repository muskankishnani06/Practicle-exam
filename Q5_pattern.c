#include <stdio.h>

int main()
{
    for (int i = 10; i >= 6; i--)
    {
        for (int j = 10; j > i; j--)
        {
            printf(" ");
        }

        for (int k = i; k <= 10; k++)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}