// Arrow of stars facing left.
#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    for(i=1; i<n; i++) //how much rows we have needed.
    {
        for(j=1; j<=(n-i); j++)
        {
            printf(" "); // It will help to print space.
        }
        for(j=i; j<=n; j++)
        {
            printf("*"); // Printing * till the value j= n;
        }

        printf("\n");// It will help to print new line
    }
    for(i=1; i<=n; i++) //how much rows we have needed
    {
        for(j=1; j<i; j++)
        {
            printf(" "); // It will help to print space
        }
        for(j=1; j<=i; j++)
        {
            printf("*"); // Printing * till the value of n
        }

        printf("\n");//It will help to print new line
    }

    return 0;
}
