#include<stdio.h>
int main()
{
    int a;
    printf("Number\tSquare\tCube\n");

    for(a=1;a<=5;a++)

        printf("%d\t%d\t%d\n",a,a*a,a*a*a);

    return 0;
}
