#include<stdio.h>
void sumOfDigits(int n)
{
    int sum=0,rem;
    while(n>0)
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
