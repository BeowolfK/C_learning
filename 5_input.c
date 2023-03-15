#include <stdio.h>
#include <stdlib.h>
int main()
{

    printf("Enter your first name : ");
    char fname[20];
    //! scanf("%s", name); scanf cut at whitespace
    fgets(fname, 20, stdin);

    printf("Enter your last name : ");
    char lname[20];
    fgets(lname, 20, stdin);
    lname[strlen(lname) - 1] = '\0'; //* remove last char (\n) by stop char (\0)

    printf("Enter your age : ");
    int age;
    scanf("%d", &age);

    printf("You, %s %s, are %d yo\n", strtok(fname, "\n"), lname, age);

    return 0;
}
