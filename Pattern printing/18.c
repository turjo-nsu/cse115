// Mirror right triangle.
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter number of rows:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=i;j<n;j++){
            printf(" ");// It will print space till (n-i).
        }
        for(j=1;j<=i;j++){
            printf("*");// Print star till i=n.
        }
        printf("\n");
    }
    return 0;
}
