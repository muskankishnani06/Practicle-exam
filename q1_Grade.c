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