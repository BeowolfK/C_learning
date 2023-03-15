#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secret = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 5;
    int outOfGuesses = 0;
    while(guess != secret && outOfGuesses == 0)
    {
        if (guessLimit > guessCount)
        {
            printf("Enter a number : ");
            scanf("%d", &guess);
            guessCount++;
        }else
        {
            outOfGuesses = 1;
        }
    }

    if (outOfGuesses == 1)
    {
        printf("Looser!\n");
    }else
    {
        printf("You Win in %d \n", guessCount);
    }
    
    
    return 0;
}