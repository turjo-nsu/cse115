// Right Triangle pattern.
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter number of rows:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            printf("*");// Printing star till j=n.
        }
        printf("\n");
    }
    return 0;
}
