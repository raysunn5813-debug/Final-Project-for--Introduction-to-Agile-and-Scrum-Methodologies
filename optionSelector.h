#ifndef OPTIONSELECTOR_H
#define OPTIONSELECTOR_H

#include <stdio.h>

#include "menu.h"
#include "calculation1.h"
#include "calculation2.h"
#include "writeFile.h"
#include "readFile.h"

void clearInputBuffer(void)
{
    int c;

    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

void optionSelector(void)
{
    int choice = 0;

    do
    {
        displayMenu();

        printf("Enter your choice (1-5): ");

        if (scanf("%d", &choice) != 1)
        {
            printf("\n[Error] Invalid input. Please enter a valid number.\n");

            clearInputBuffer();

            continue;
        }

        printf("\n");

        switch (choice)
        {
            case 1:
                firstCalculation(15, 27);
                break;

            case 2:
                secondCalculation(15, 27);
                break;

            case 3:
                writeToFile();
                break;

            case 4:
                readFromFile();
                break;

            case 5:
                printf("Exiting application. Goodbye!\n");
                break;

            default:
                printf("[Error] Option %d is not recognized. Please choose between 1 and 5.\n", choice);
                break;
        }

    } while (choice != 5);
}

#endif