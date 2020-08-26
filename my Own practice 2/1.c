#include<stdio.h>
int sum(int n)
{
    if (n != 0)
        return n + sum(n - 1);
    else
        return n;
}
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    printf("Result: %d",sum(num));
    return 0;
}
