// Half diamond of stars right side.
#include<stdio.h>
int main()
{
    int i,j,n,rows;
    printf("Enter number of rows:");
    scanf("%d",&n);
    rows=1;

    for(i=1;i<=n*2;i++){
        for(j=1;j<=rows;j++)
            printf("*");// printing star j=n times.
          printf("\n");

      if(i<n){
        rows++;
      }
      else
      {
          rows--;
      }

    }
    return 0;
}
