#include <stdio.h>
#include <stdlib.h>
int main()
{
    int max;
    float *data;
    printf("Enter the total number of elements: ");
    scanf("%d", &max);
    data = (float *)calloc(max, sizeof(float));
    if (data == NULL)
    {
        printf("Error!!! memory not allocated.");
        exit(0);
    }
    for (int i = 0; i < max; ++i)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%f", data + i);
    }
    for (int i = 1; i < max; ++i)
    {
        if (*data < *(data + i))
            *data = *(data + i);
    }
    printf("Largest number = %.2f", *data);
    return 0;
}

