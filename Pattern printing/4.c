// Full diamond star pattern.
#include<stdio.h>
int main()
{
    int i,j,n;
    int stars,spaces;
    printf("Enter any number:");
    scanf("%d",&n);// Number of rows specify.
    stars=1;
    spaces=n-1;
    for(i=1;i<n*2;i++){

        for(j=1;j<=spaces;j++)
            printf(" ");// printing space according to the value of n.

        for(j=1;j<=stars*2-1;j++)
            printf("*");// It will print the star according to the n value:(n*2-1).
        printf("\n");

        if(i<n){
            spaces--;
            stars++;

        }
        else
        {
            stars--;
            spaces++;
        }
    }
    return 0;
}
