// Full hollow diamond of stars.
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter numbers of Row:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            printf("*");// It will print star j=n times.
        }
        for(j=1;j<=(2*i-2);j++){
            printf(" ");// Printing space according to the value of i.
        }
        for(j=i;j<=n;j++){
            printf("*");// printing star j=n times.
        }

        printf("\n");
    }
    //lower part of diamond star pattern.
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(j=(2*i-2);j<(2*n-2);j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
