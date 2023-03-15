#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';
    printf("Memory Adress of : ");
    printf("Age : %p \n\t\t   GPA : %p \n\t\t   Grade : %p", &age, &gpa, &grade);
    return 0;
}