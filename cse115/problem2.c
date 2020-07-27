#include<stdio.h>
#include<math.h>
int main()
{
    double base,height,hypotenuse,area;
    printf("enter base:");
    scanf("%lf", &base);
    printf("enter hypotenuse:");
    scanf("%lf", &hypotenuse);
    height=sqrt(pow(hypotenuse,2)-pow(base,2));
    if(base>hypotenuse)
    printf("base cannot be higher than hypotenuse");
    else if(base<hypotenuse)
    printf("Height is:%lf\nArea is:%lf\n",height, area);
    else
    printf("Height is:%lf\nArea is:%lf\nThe triangle is degenerate triangle therefore area and height both are zero", height, area);
    return 0;
}
