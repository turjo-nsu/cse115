// Inverted right triangle.
#include<stdio.h>
int main()
{
    int i,j,rows;

    printf("Enter numbers of row:");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++){
        for(j=i;j<=rows;j++){
            printf("*");// It will print star till j=rows.
        }
        printf("\n");
    }
    return 0;
}
