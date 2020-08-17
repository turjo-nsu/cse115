// hollow inverted right triangle.
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter any rows:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            if(j==i ||i==1 || j==n){
                printf("*");// printing star depend on the value of j and i.
            }
            else{
                printf(" ");// If condition not successful.
            }
        }
        printf("\n");
    }
    return 0;
}
