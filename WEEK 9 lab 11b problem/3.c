#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    int id;
    char dept[20];
    double cgpa;
} student;

int main()
{
    int i;
    student arr[2];
    FILE *file;
    file = fopen ("input.csv", "r");
    if(file != NULL)
    {
        fgets(arr[i].name, 50, file);
        fscanf(file, "%d", arr[i].id);
        fgets(arr[i].dept, 20, file);
        fscanf(file, "%lf", arr[i].cgpa);

        getc (file);

        fclose (file);
    }
    for (i=0; i<2; i++)
    {
        printf("Name: ");
        puts(arr[i].name);
        printf("\tId: %d\tDept: ", arr[i].id);
        puts(arr[i].dept);
        printf("\tCGPA: %.2lf\n", arr[i].cgpa);
    }
    return 0;
}
