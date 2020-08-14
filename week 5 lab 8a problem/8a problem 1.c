#include<stdio.h>
int countSearchKey(int arr[], int size, int key);
int main()
{
    int i,key,x;
    int a[5]={7, 3, 4, 8, 4};
    printf("Enter search key:");
    scanf("%d",&key);
     x=countSearchKey(a,5,key);
     printf("Number is repeating:%d",x);
     return 0;
}
int countSearchKey(int arr[], int size, int key){
  int count=0;
  for(int i=0;i<5;i++){
    if(arr[i]==key){
        count++;
    }
  }
  return count;
}
