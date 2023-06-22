/*1. Assume User will be providing input in the form of a string as show below.
Write a function to parse the string and initialize an array of structures.

Example String : "1001 Aron 100.00"
Example Structure :
    struct Student{
        int rollno;
        char name[20];
        float marks;
    };

Note: User must be able define the no. of inputs/size of the array during runtime.
*/

#include <stdio.h>
int display(char name, int rollno, float marks);
void initialize(int);

struct student
{
    int rollno;
    char name[20];
    float marks;
} s[10];

// typedef struct student student;

void initialize(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("enter the names of the student");
        scanf("%c", &s[i].name);
        printf("enter the rollno of the student");
        scanf("%d", &s[i].rollno);
        printf("enter the marks of the student");
        scanf("%f", &s[i].marks);
    }
}

int display(char name, int rollno, float marks)
{
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("names of the student");
        printf("%c", s[i].name);
        printf("rollno of the student");
        printf("%d", s[i].rollno);
        printf("marks of the student");
        printf("%f", s[i].marks);
    }
}

int main()
{
    printf("enter the number of details of the students that you want to take ");
    int n, i;
    scanf("%d", &n);
    initialize(n);
    for (i = 0; i < n; i++)
    {
        display(s[i].name, s[i].rollno, s[i].marks);
    }
}