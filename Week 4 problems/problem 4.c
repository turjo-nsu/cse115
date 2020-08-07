#include <stdio.h>
int main()
{
    int i, j, x;
    printf("Enter number of lines:\n");
    scanf("%d", &x);
    for(i=1; i<=x; ++i)
    {
        for(j=0; j<i; ++j)
            printf("*");
        printf("\n");
    }
    return 0;
}
