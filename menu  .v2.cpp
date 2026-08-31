#include <stdio.h>
#include <stdlib.h>

void displayMenu(void);
void clearInputBuffer(void);

int main(void) {
    int choice = 0;

    do {
        displayMenu();
        printf("Enter your choice (1-4): ");

        // Validate integer input
        if (scanf("%d", &choice) != 1) {
            printf("\n[Error] Invalid input. Please enter a valid number.\n\n");
            clearInputBuffer();
            continue;
        }

        printf("\n");
        switch (choice) {
            case 1:
                printf(">> Executing Option 1: Feature A...\n\n");
                // Insert Option 1 logic/function call here
                break;
            case 2:
                printf(">> Executing Option 2: Feature B...\n\n");
                // Insert Option 2 logic/function call here
                break;
            case 3:
                printf(">> Executing Option 3: Feature C...\n\n");
                // Insert Option 3 logic/function call here
                break;
            case 4:
                printf("Exiting application. Goodbye!\n");
                break;
            default:
                printf("[Error] Option %d is not recognized. Please choose between 1 and 4.\n\n", choice);
                break;
        }

    } while (choice != 4);

    return 0;
}

// Function to print the menu interface
void displayMenu(void) {
    printf("========================================\n");
    printf("              MAIN MENU                 \n");
    printf("========================================\n");
    printf("  1. Option 1\n");
    printf("  2. Option 2\n");
    printf("  3. Option 3\n");
    printf("  4. Exit\n");
    printf("========================================\n");
}

// Helper to flush remaining input from the buffer on invalid input
void clearInputBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
