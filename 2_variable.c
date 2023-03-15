#include <stdio.h>
#include <stdlib.h>
int main()
{

    char characterName[] = "John";      //! " is important
    char initial = 'D';                 //! ' is important
    int characterAge = 35;
    short charAge = 35;
    long turnover = 2147483646;
    float childAge = 3.5;
    double childrenAge = 3.5;

    printf("There once was a man named %s %c.\n", characterName,initial);
    printf("he was %d years old.\n", characterAge);
    printf("He really liked the name %s\n", characterName);
    printf("but did not like being %d.\n", charAge);
    printf("His turnover is about %d\n", turnover);
    printf("and his child is %.1f\n", childAge);
    printf("but he didn't like being %.2f.\n", childrenAge);
    printf("My favorite %s is %d\n","number",42);
    return 0;
}