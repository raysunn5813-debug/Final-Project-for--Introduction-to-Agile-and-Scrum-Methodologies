#ifndef WRITEFILE_H
#define WRITEFILE_H

#include <stdio.h>

void writeToFile(void)
{
    FILE *file;

    file = fopen("coding.txt", "w");

    if (file == NULL)
    {
        printf("Error: The file could not be opened.\n");
        return;
    }

    fprintf(file, "This is the outputted information from the application.");

    fclose(file);

    printf("Information successfully outputted to coding.txt\n");
}

#endif
