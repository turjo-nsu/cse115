#include<stdio.h>
void printFibonacci(int N);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("Fibonacci Series:");
    printFibonacci(n);
    printf("\n\n");
    return 0;
}
void printFibonacci(int N)
{
    int i, j;
    int a[N];
    a[0]=0;
    a[1]=1;
    for(i=2;i<=N;i++)
    {
       a[i]=a[i-1]+a[i-2];
    }
    for(i=0;i<=N-1;i++)
    {
       printf("%d ", a[i]);
    }
}
