#include <stdio.h>
int main()
{
        int size, i, largest;
        printf("Enter array size: ");
        scanf("%d", &size);
        int array[size];
        printf("Enter %d value of  array: \n", size);
        for (i = 0; i < size; i++)
        {
            scanf("%d", &array[i]);
        }
        largest = array[0];
        for (i = 1; i < size; i++)
        {
            if (largest < array[i])
            largest = array[i];
        }
        printf("Largest element in the array is : %d", largest);
        return 0;

}
