#include <stdio.h>
#include <string.h>

struct student
{
    char name[25];
    float gpa;
};


int main()
{
    struct student student1 = {"Isiah", 3.0};
    struct student student2 = {"sai", 2.0};
    struct student student3 = {"pep", 1.0};
    struct student student4 = {"pal", 3.0};
    struct student student5 = {"puh", 5.0};

    struct student students[] = {student1, student2, student3, student4, student5};

    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        printf("%-12s\t", students[i].name); //the \t is basically tab and the "-12" is how much white space
        printf("%.2lf\n", students[i].gpa);

    }

    return 0;
}