// Inverted rhombus hollow star pattern.
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter number of rows:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<i;j++){//It will print space according to the value of i.
        printf(" ");
    }
    for(j=1;j<=n;j++){
        if(i==1||j==n||i==n||j==1){
            printf("*");
        }
        else{
            printf(" ");// If condition is not successful.
        }
    }
    printf("\n");
}
   return 0;
}
