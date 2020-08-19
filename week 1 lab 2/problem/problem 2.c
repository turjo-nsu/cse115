#include<stdio.h>
#include<math.h>
int main()
{
  float base,height,hypotenuse,Area;
  printf("\n Please Enter hypotenuse and base of the right angled triangle\n");
  scanf("%f %f",&hypotenuse, &base);
  height = sqrt(pow(hypotenuse,2)+pow(base,2));
  Area = 0.5*base*height;
  printf("\n hight of right angled triangle is: %f\n",height);
  printf("\n Area of right angled triangle is: %f\n",Area);
  return 0;
}
