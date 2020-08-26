#include <stdio.h>
#define max_size 100
int main()
{
    int arr[max_size];
    int size, i, Search, found;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array:\n ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter element to search: ");
    scanf("%d", &Search);
    found = 0;
    for(i=0; i<size; i++)
    {
        if(arr[i] == Search)
        {
            found = 1;
            break;
        }
    }
    if(found == 1)
    {
        printf("%d is found", Search, i + 1);
    }
    else
    {
        printf("\n%d is not found", Search);
    }
    return 0;
}
