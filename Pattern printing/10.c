
// Hollow pyramid of stars.
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter number of rows:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++){// Loop will run till i=n;
            if(j==1 || j==(2*i-1)||i==n){
                printf("*");
            }
            else{
                printf(" ");// If condition not successful.
            }
        }
        printf("\n");
    }
    return 0;
}
