// Arrow of star facing Right.
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter any number:");
    scanf("%d",&n);

    for(i=1;i<n;i++){
        for(j=1;j<(2*i-2);j++){ // It helps to create space according to i value.
            printf(" ");
        }
        for(j=i;j<=n;j++){
            printf("*");// printing star till j=n.
        }
        printf("\n");// After printing star it will create new line.
    }
    for(i=1;i<=n;i++){
        for(j=1;j<(2*n-2*i);j++){
            printf(" "); // Printing space according to the value of n and i.
        }
        for(j=1;j<=i;j++){
        printf("*"); // printing star until i=n.
    }
    printf("\n");
    }

    return 0;
}
