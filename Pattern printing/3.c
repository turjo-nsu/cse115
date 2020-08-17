#include <stdio.h>

int main()
{
    int i, j, rows;
    int stars, spaces;

    printf("Enter rows to print : "); // input the value of rows //
    scanf("%d", &rows);


    stars = 1; // take the fixed value of stars which is 1 //
    spaces = rows - 1; // take the fixed value of spaces which is rows-1;
    for(i=1; i<rows*2; i++) // the value of i is less then rows*2 and will print new line //
    {
        for(j=1; j<=spaces; j++) // the value of j is less then and equal to spaces and will print space //
            printf(" "); // for print space //
        for(j=1; j<stars*2; j++) // the value of j is less then starts*2 and will print star ( * ) //
            printf("*"); //for print star //
        printf("\n"); // for print new line //

        if(i<rows)
        {
            spaces--;
            stars++;
        }
        else
        {
            spaces++;
        }
            stars--;
    }

    return 0;
}
