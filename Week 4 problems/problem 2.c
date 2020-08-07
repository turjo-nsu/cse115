#include <stdio.h>
int main()
{
    int i, x, fact=1;
    printf("Enter a number:\n");
    scanf("%d", &x);
    for(i=1; i<=x; i++)
    {
        if(x<0)
            printf("Error! Factorial cannot be negative");
        else
            fact=fact*i;
    }
    printf("Factorial of %d = %d\n", x, fact);
    return 0;
}
