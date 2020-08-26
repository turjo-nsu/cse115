#include<stdio.h>
double harmonicSum(int n)
{
    int i;
    double x;
    double sum=0;
    for(i=1;i<=n;i++)
    {
        x=(1.00/i);
        sum+=x;
    }
    printf("Sum: %.2lf",sum);
    return sum;
}
int main()
{
    int num;
    printf("Enter any intiger number:");
    scanf("%d",&num);
    harmonicSum(num);
    return 0;
}
