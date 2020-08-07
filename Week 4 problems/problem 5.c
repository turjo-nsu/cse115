#include <stdio.h>
int main()
{
    int i, j, x;
    printf("Enter number of lines:\n");
    scanf("%d", &x);
    for(i=x; i>=1; --i)
    {
        for(j=i; j>=1; --j)
            printf("*");
        printf("\n");
    }
    return 0;
}
