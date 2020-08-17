// Reverse hollow pyramid.
#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
            printf(" ");// Printing space according to the value of i.
        }
        for(j=1;j<=(n*2-(2*i-1));j++){
            if(i==1||j==1||j==(n*2-(2*i-1))){
                printf("*");
            }
            else{
                printf(" ");// If condition is not sucessful.
            }
        }
        printf("\n");
    }
    return 0;
}
