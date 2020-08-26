#include<stdio.h>
void listNumberDesc(int start,int end)
{
    int i;
    if(start<end)
    {
        for(i=end;i>=start;i--)
        {
            printf("%d,",i);
        }
    }
    else{
        for(i=start;i>=end;i--)
        {
            printf("%d,",i);
        }
    }
}
int main()
{
    int n1,n2;
    printf("input the start number: ");
    scanf("%d",&n1);
    printf("input the end number: ");
    scanf("%d",&n2);
    listNumberDesc(n1,n2);

    return 0;
}
