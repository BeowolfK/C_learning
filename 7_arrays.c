#include <stdio.h>
#include <stdlib.h>
int main(){

    printf("\n");

    int luckyNumbers[] = {4, 8, 14, 16, 23, 42};
    printf("%d\n", luckyNumbers[2] );
    luckyNumbers[2] = 200;
    printf("%d\n", luckyNumbers[2] );
    printf("\n");

    int number[10];
    number[1] = 90;
    number[0] = 100;
    number[2] = 80;
    number[3] = 70;
    number[4] = 60;
    number[5] = 50;
    number[6] = 40;
    number[7] = 30;
    number[7] = 10;
    number[8] = 0;
    number[9] = 14;
    printf("%d\n", number[9]);

    printf("\n");

    char phrase[17] = "This is an Array";

    printf("%s\n", phrase );

    return 0;
}