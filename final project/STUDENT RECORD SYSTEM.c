#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define Student struct Stud
void add(FILE * fp);                //to Add a Student
void searchRecord(FILE * fp);       //to Search a student
void modify(FILE * fp);             //to Modify a record
FILE * del(FILE * fp);              //to Delete a student record
void displayList(FILE * fp);        //to Display list
void printChar(char ch,int n);
void printHead();                   //to print headline
struct Stud
{
    char name[100];
    char dep[50];
    int roll;
    float cgpa;
};
int main()
{
FILE * fp;
Student s;
int option;
char another;
if((fp=fopen("studentInfo.txt","rb+"))==NULL)
{
    if((fp=fopen("studentInfo.txt","wb+"))==NULL)
        {
            printf("can not open file");
            return 0;
        }
}
printHead();
printf("\n\t\tPress Any key to Enter");
getch();
while(1)
{
    printHead();
    printf("\n\t");
    printf("\n\t\t1. ADD STUDENT");
    printf("\n\t\t2. SEARCH STUDENT");
    printf("\n\t\t3. MODIFY STUDENT RECORD");
    printf("\n\t\t4. DELETE STUDENT");
    printf("\n\t\t5. DISPLAY STUDENT LIST");
    printf("\n\t\t0. EXIT");
    printf("\n\tEnter your Option :--> ");
    scanf("%d",&option);
    switch(option)
    {
        case 0: return 1;
                break;
        case 1: add(fp);
                break;
        case 2: searchRecord(fp);
                break;
        case 3: modify(fp);
                break;
        case 4: fp=del(fp);
                break;
        case 5: displayList(fp);
                break;
        default: printf("\n\t\t Pressed wrong Key");
                 printf("\n\t\tProgram terminated");
                 getch();
                 exit(0);
    }
}
return 1;
}
void printChar(char ch,int n)
{
    while(n--)
    {
        putchar(ch);
    }
}
void printHead()
{ system("cls");
printf("\n\n\t");
printChar(' ',8);
printf("Student Record System");
printChar(' ',8);
printf("\n");
}
                        //***********  ADD STUDENT  ***********
void add(FILE * fp)
{
printHead();
char another='y';
Student s;
int i;
float cgpa;
fseek(fp,0,SEEK_END);
while(another=='y'||another=='Y')
{
    printf("\n\t\tEnter Full Name of Student\t");
    fflush(stdin);
    fgets(s.name,100,stdin);
    s.name[strlen(s.name)-1]='\0';
    printf("\n\t\tEnter Department\t");
    fflush(stdin);
    fgets(s.dep,50,stdin);
    s.dep[strlen(s.dep)-1]='\0';
    printf("\n\tEnter Roll number \t");
    scanf("%d",&s.roll);
    s.cgpa=cgpa;
    fwrite(&s,sizeof(s),1,fp);
    printf("\n\tWant to enter another student info (Y/N)\t");
    fflush(stdin);
    another=getchar();
}
}
                            //***********  MODIFY RECORD  ***********
void modify(FILE * fp)
{
printHead();
Student s;
int i,flag=0,tempRoll,siz=sizeof(s);
float cgpa;
printf("\n\n\tEnter Roll Number to MODIFY the Record : ");
scanf("%d",&tempRoll);
rewind(fp);
while((fread(&s,siz,1,fp))==1)
{
    if(s.roll==tempRoll)
        {flag=1;
        break;
        }
}
if(flag==1)
{
fseek(fp,-siz,SEEK_CUR);
printf("\n\tRECORD FOUND");
printf("\n\tEnter New Date for the Record");
printf("\n\tEnter Full Name of Student\t");
fflush(stdin);
fgets(s.name,100,stdin);
s.name[strlen(s.name)-1]='\0';
printf("\n\tEnter Department\t");
fflush(stdin);
fgets(s.dep,50,stdin);
s.dep[strlen(s.dep)-1]='\0';
printf("\n\tEnter Roll number \t");
scanf("%d",&s.roll);
fwrite(&s,sizeof(s),1,fp);
}
else printf("\n\n\t ERROR RECORD NOT FOUND");
printf("\n\n\t");
system("pause");
}
                            //***********  DELETE STUDENT RECORD  **********
FILE * del(FILE * fp)
{
printHead();
Student s;
int flag=0,tempRoll,siz=sizeof(s);
FILE *ft;
if((ft=fopen("temp,txt","wb+"))==NULL)
{
    printf("\n\t\t\t!! ERROR !!\n\t\t");
    system("pause");
    return fp;
}
printf("\n\tEnter Roll Number to Delete the Record");
printf("\n\t\tRoll No. : ");
scanf("%d",&tempRoll);
rewind(fp);
while((fread(&s,siz,1,fp))==1)
{
    if(s.roll==tempRoll)
    { flag=1;
    printf("\n\tRecord Deleted for");
    printf("\n\t%s\n\t%s\n\t%d\n\t",s.name,s.dep,s.roll);
    continue;
    }
    fwrite(&s,siz,1,ft);
}
fclose(fp);
fclose(ft);
remove("studentInfo.txt");
rename("temp.txt","studentInfo.txt");
if((fp=fopen("studentInfo.txt","rb+"))==NULL)
{
    printf("Error");
    return NULL;
}
if(flag==0) printf("\n\tERROR RECORD NOT FOUND \n\t");
printf("\n\t");
system("pause");
return fp;
}
                            //***********  DISPLAY STUDENT LIST  ***********
void displayList(FILE * fp)
{   printHead();
    Student s;
    int i,siz=sizeof(s);
    rewind(fp);
    while((fread(&s,siz,1,fp))==1)
    {
    printf("\n\t\tNAME : %s",s.name);
    printf("\n\n\t\tDEPARTMENT : %s",s.dep);
    printf("\n\n\t\tROLL : %d",s.roll);
    printf("\n\tCGPA : %.2f\n\t",s.cgpa);
    }
    printf("\n\n\t");
    printChar('*',40);
    printf("\n\n\t");
    system("pause");
}
                        //***********  SEARCH STUDENT  ***********
void searchRecord(FILE *fp)
{printHead();
int tempRoll,flag,siz,i;
Student s;
char another='y';
siz=sizeof(s);
while(another=='y'||another=='Y')
{
printf("\n\n\tEnter Roll Number to search the record : ");
scanf("%d",&tempRoll);
rewind(fp);
while((fread(&s,siz,1,fp))==1)
{
    if(s.roll==tempRoll)
         {flag=1;
         break;
         }
}
if(flag==1)
    {
        printf("\n\t\tNAME : %s",s.name);
        printf("\n\tDEPARTMENT : %s",s.dep);
        printf("\n\tROLL : %d",s.roll);
        printf("\n\n\t\tCGPA : %.2f\n\t",s.cgpa);
}
    else printf("\n\n\t\tERROR RECORD NOT FOUND !!!!");
    printf("\n\n\t\tWant to enter another search (Y/N)");
    fflush(stdin);
    another=getchar();
}
}
