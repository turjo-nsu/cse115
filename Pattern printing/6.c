// Half diamond of star facing left.
#include<stdio.h>
int main()
{
    int i,j,n;
    int stars,spaces;
    printf("Enter number of Rows:");
    scanf("%d",&n);
    stars=1;
    spaces=n-1;

    for(i=1;i<=n*2;i++){
        for(j=1;j<=spaces;j++)
            printf(" ");// printing star spaces according(n-1) times.

        for(j=1;j<=stars;j++)
            printf("*");// printing star j=n times.
        printf("\n");

        if(i<n){
            stars++;
            spaces--;
        }
        else{
            stars--;
            spaces++;
        }
    }
    return 0;
}
