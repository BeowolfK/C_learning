#include <stdio.h>
#include <stdlib.h>

int main()
{

    //? Get memory adress with variable:

    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    printf("Memory Adress of : ");
    printf("Age : %p \n\t\t   GPA : %p \n\t\t   Grade : %p\n\n", &age, &gpa, &grade); //* %p print the memory adresse of a value

    //? Get value with memory adress :

    int *pAge = &age; //! You must respect the data type
    double *pGpa = &gpa;
    char *pGrade = &grade;

    printf("Value with Memory Adress of : ");
    printf("Age : %d", *pAge); //! You must respect the data type here too
    printf("\n\t\t\t      Gpa : %f", *pGpa);
    printf("\n\t\t\t      Grade : %c", *pGrade);

    printf("\n");

    printf("Dereferecing pointers : %d, %d, %d, %d,...", &age, *&age, &*&age, *&*&age );

    return 0;
}