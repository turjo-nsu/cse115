#include<stdio.h>
double getAverage(int arr[], int size);
int main ()
{
int balance[5] = {1000, 2, 3, 17, 50};
double avg;
avg = getAverage( balance, 5 ) ;
printf( "Average value: %f ", avg );
return 0;
}
