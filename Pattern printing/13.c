// Hollow square diagonal star pattern.
#include<stdio.h>
int main()
{
    int i,j,r;
    printf("Enter numbers of row:");
    scanf("%d",&r);

    for(i=1;i<=r;i++){
        for(j=1;j<=r;j++){// print star till j=r.
            if(i==1||i==r||j==1||j==r||j==i||j==(r-i+1)){
                // If condition is successful it will print star.
               printf("*");
               }
                else{
                    printf(" ");
                }
        }
        printf("\n");
    }
    return 0;
}
