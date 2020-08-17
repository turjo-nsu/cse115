// Hollow Square star pattern.
#include<stdio.h>
int main()
{
    int i,j,r;
    printf("Enter numbers of row:");
    scanf("%d",&r);

    for(i=1;i<=r;i++){
        for(j=1;j<=r;j++){
            if(i==1||i==r||j==1||j==r){
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
