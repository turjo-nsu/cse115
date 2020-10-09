#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    int id;
    char dept[20];
    double cgpa;
} student;

void pintByDept (char *deptName, student allStudent[], int size);

int main()
{
    student allStudent[10];

}
