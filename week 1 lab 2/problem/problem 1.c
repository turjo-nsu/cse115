#include <stdio.h>
#include<math.h>
int main ()
{
int x,y,z,p,q,sum;
float result;
printf("Enter the value of x,y,z,p,q: \n");
scanf("%d %d %d %d %d", &x, &y, &z, &p, &q);
sum= x+y+z+p+q;
result = sum /(float)5;
printf ("\n The average is %f", result);
return 0;
}
