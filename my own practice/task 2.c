#include<stdio.h>
int main()
{
    int n;
    printf("Enter row:");
    scanf("%d", &n);
    for(int r=1; r<=n; r++)
    {
        for(int s=1; s<=n-r; s++)
        {
            printf(" ");
        }
        for(int c1=1; c1<=r; c1++)
        {
            printf("%d", c1);
        }
        for(int c2=r-1; c2>=1; c2--)
        {
            printf("%d", c2);
        }
        printf("\n");
    }
    return 0;
}
