#include <stdio.h>
#include <stdlib.h>

int main()
{

    sayHi("BeowolfK");
    if (sup(5, 8))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}

void sayHi(char name[])
{
    printf("Hello %s\n", name);
}

int sup(int a, int b)
{
    if (a >= b)
    {
        return 1;
    }
    return 0;
}