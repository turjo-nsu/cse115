#include <stdio.h>
int main()
{
   int radius;
   float area, perimeter;
   printf("Enter the value of radius");
   scanf("%d",&radius);
   area = 3.14*radius*radius;
   perimeter = 2*3.14*radius;
   printf("\nArea of the circle= %f\n" ,area);
   printf("\nPerimeter of the Circle = %f\n", perimeter);

return(0);
}
