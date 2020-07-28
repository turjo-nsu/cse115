#include<stdio.h>
int main()
{
    int year, a, b, c;
    printf("Enter a year:");
    scanf("%d", &year);
    a=year%4;
    b=year%100;
    c=year%400;

    switch(a)
    {
       case 0:
          switch(b)
          {
             case 0:
                switch(c)
                {
                   case 0:
                      printf("The year is a leap year");
                   break;
                   default:
                      printf("the year is not a leap year");
                }
             break;
             default:
                printf("The year is leap year");
          }
       break;
       default:
          printf("The year is not a leap year");
    }

return 0;
}
