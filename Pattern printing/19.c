// Mirrored hollow right triangle.
#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for(i=1;i<=rows;i++){
        for(j=i;j<rows;j++){
            printf(" ");// Printing space according to the value of rows.
        }
        for(j=1;j<=rows;j++){
            if(j==1||i==j||i==rows){
                printf("*");// If condition successful print star.
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
