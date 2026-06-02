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