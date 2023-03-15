#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[5][2] =
        {
            {1, 2},
            {3, 4},
            {5, 6},
            {7, 8},
            {9, 0},
        };
    
    int i, j;
    for (int i = 0; i < 5; ++i) {
       for (int j = 0; j < 2; ++j) {
           printf("%d, ", nums[i][j] );
       } 
       printf("\n");
    }
    return 0;
}