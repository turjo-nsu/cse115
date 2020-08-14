#include<stdio.h>
int main()
{
    int i;
    int arr[5];
    printf("Enter numbers of array:\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    printf("Reverse numbers of arrays are:\n");

    for(i=4;i>=0;i--){
        printf("%d\t",arr[i]);
    }
    return 0;
}
