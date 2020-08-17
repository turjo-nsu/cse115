// heart of stars.
#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, n;
    char name[50];
    int len;

    printf("Enter your name: ");
    gets(name);

    printf("Enter value of n : ");
    scanf("%d", &n);

    len = strlen(name);

    // Print upper part of the heart shape
    for(i=n/2; i<=n; i+=2)//each time increase i+2;
    {
        for(j=1; j<n-i; j+=2)
        {
            printf(" ");// Printing space according to the value n and i.
        }

        for(j=1; j<=i; j++)
        {
            printf("*");// printing stat i=n/2 times. It depends on i=2.
        }

        for(j=1; j<=n-i; j++)
        {
            printf(" "); // printing space (n-i).It depends on n and i value.
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Prints lower triangular part of the pattern
    for(i=n; i>=1; i--) // decrease i value according to the value of n.
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }

        // Print the name with star.
        if(i == n)
        {
            for(j=1; j<=(n * 2-len)/2; j++)
            {
                printf("*");// How much print star beside the name.
            }

            printf("%s", name);

            for(j=1; j<(n*2-len)/2; j++)
            {
                printf("*");
            }
        }
        else
        {
            for(j=1; j<=(i*2)-1; j++)
            {
                printf("*");// It depends on the value until i=1.
            }
        }

        printf("\n");
    }

    return 0;
}
