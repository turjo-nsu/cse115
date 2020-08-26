#include<stdio.h>
void sumOfDigits(int n)
{
    int i,sum=0,rem;
    for(i=1;i<=n;i++)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem;
    }
    printf("Summation of digit: %d",sum);
}
int main()
{
    int num;
    printf("Enter any intiger number: ");
    scanf("%d",&num);
    sumOfDigits(num);
    return 0;
}
