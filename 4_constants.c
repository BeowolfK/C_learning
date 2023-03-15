#include <stdio.h>
#include <stdlib.h>
int main(){

    int num = 5;
    printf("%d\n", num );
    num = 8;
    printf("%d\n", num );

    //* num is not a constant so can change

    const int CON = 5;
    printf("%d\n",CON);
    //* CON = 8; On change, throw an error
    printf("%d\n",CON);

    return 0;
}


