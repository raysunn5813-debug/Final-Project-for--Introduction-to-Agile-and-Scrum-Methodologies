#ifndef READFILE_H
#define READFILE_H

#include <stdio.h>

void readFromFile(void)
{
    FILE *file;
    char character;

    file = fopen("coding.txt", "r");

    if (file == NULL)
    {
        printf("Error: coding.txt was not found.\n");
        return;
    }

    printf("Information retrieved from coding.txt:\n");

    while ((character = fgetc(file)) != EOF)
    {
        printf("%c", character);
    }

    printf("\n");

    fclose(file);
}

#endif