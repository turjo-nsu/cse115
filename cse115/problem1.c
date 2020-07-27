#include<stdio.h>
int main()
{
   double var1, var2, var3, var4, var5, average;
   printf("Enter 5 numbers:");
   scanf("%lf %lf %lf %lf %lf", &var1, &var2, &var3, &var4, &var5);
   average=(var1+var2+var3+var4+var5)/5;
   printf("average is: %lf", average);
   return 0;
}
