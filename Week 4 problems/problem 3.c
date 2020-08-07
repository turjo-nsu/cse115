#include <stdio.h>
int main()
{
    int i, x, sum=0;
    printf("Enter an integer:\n");
    scanf("%d", &x);
    for(i=1; i<=x; ++i)
        sum+=i;
    printf("Sum of the series: %d", sum);
    return 0;
}
