#include <stdio.h>
#include <stdlib.h>

int main()
{
    // FILE *fpointer = fopen("Files/C.txt", "w"); //* w is for write, a for append and r for read //* you can specify relative or absolute path
    // fprintf(fpointer, "BeowolfK\nPhignis");

    // FILE *fpointer = fopen("Files/C.txt", "a");
    // fprintf(fpointer, "Lucie\nKL\n");
    // for (int i = 0; i < 5; i++)
    // {
    //     fprintf(fpointer, "BUBU\n");
    // }

    char line[255];
    FILE * fpointer = fopen("Files/C.txt", "r");
    if (fpointer == NULL)
    {
        perror("Unable to open the file!");
        exit(1);
    }

    fgets(line, 255, fpointer);

    while (!feof(fpointer))                       //* feof detect end of file,, so negative the conditions in ordre to do while not end of file
    {
        fgets(line, sizeof(line), fpointer);
        printf("%s", line );
    }

    fclose(fpointer);
    return 0;
}