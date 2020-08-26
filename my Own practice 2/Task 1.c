#include <stdio.h>
void readArray(int arr[], int size)
{
    int i =0;
    printf("Enter elements : \n");
    for(i=0; i < size; i++)
    {
        printf("Enter arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
}
void printArray(int arr[],int size)
{
    int i =0;
    printf("\nElements are : ");
    for(i=0; i < size; i++)
    {
        printf("\n\tarr[%d] : %d",i,arr[i]);
    }
    printf("\n");
}
char compareArray(int a[],int b[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(a[i]!=b[i])
			return 1;
	}
	return 0;
}
int main()
{
	int a[5],b[5];
	readArray(a,5);
	readArray(b,5);
	if(compareArray(a,b,5)==0)
	{
		printf("Identical.\n");
	}
	else
	{
		printf("Not identical.\n");
	}
	return 0;
}
