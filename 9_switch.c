#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    char grade;
    char GRADE;
    printf("What's your grade at last exam ? ");
    scanf("%c", &grade, stdin);

    switch (toupper(grade))
    {
    case 'A':
        printf("GG !\n");
        break;
    case 'B':
        printf("You did great !\n");
        break;
    case 'C':
        printf("You can do better !\n");
        break;
    case 'D':
        printf("So - so ~~\n");
        break;
    case 'E':
        printf("Bad !\n");
        break;
    case 'F':
        printf("You failed !\n");
        break;
    default:
        printf("Invalid Grade\n");
    }

    return 0;
}