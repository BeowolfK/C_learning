#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{

    struct Student student1;
    //! student1.name = "BeowolfK";                Don't work bcs string is an array of char
    strcpy(student1.name, "BeowolfK");
    //! student1.major = "C Programming";           Don't work bcs string is an array of char
    strcpy(student1.major, "C Programming");
    student1.age = 18;
    student1.gpa = 3.2;

    printf("%s have %d yo and is in %s with %f gpa\n", student1.name, student1.age, student1.major, student1.gpa);

    struct Student student2;
    strcpy(student2.name, "Phignis");
    strcpy(student2.major, "C# Programming");
    student2.age = 18;
    student2.gpa = 5.2;

    printf("%s have %d yo and is in %s with %f gpa\n", student2.name, student2.age, student2.major, student2.gpa);

    return 0;
}