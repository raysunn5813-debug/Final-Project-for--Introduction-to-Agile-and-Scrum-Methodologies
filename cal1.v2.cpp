#include <stdio.h>
#include <stdlib.h>

// Function prototype: takes two values, returns the calculated result
double performCalculation(double value1, double value2);
void clearInputBuffer(void);

int main(void) {
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("========================================\n");
    printf("        CALCULATION FUNCTION 1          \n");
    printf("========================================\n\n");

    // Prompt and validate first input
    printf("Enter the first value: ");
    while (scanf("%lf", &num1) != 1) {
        printf("[Error] Invalid input. Enter a valid number: ");
        clearInputBuffer();
    }

    // Prompt and validate second input
    printf("Enter the second value: ");
    while (scanf("%lf", &num2) != 1) {
        printf("[Error] Invalid input. Enter a valid number: ");
        clearInputBuffer();
    }

    // Call the calculation function
    result = performCalculation(num1, num2);

    // Render formatted results to console
    printf("\n----------------------------------------\n");
    printf("Input 1:    %.2f\n", num1);
    printf("Input 2:    %.2f\n", num2);
    printf("Calculation Result: %.2f\n", result);
    printf("----------------------------------------\n");

    return 0;
}

// Dedicated calculation function (Example: standard product calculation)
double performCalculation(double value1, double value2) {
    return value1 * value2;
}

// Clear leftover characters from standard input stream
void clearInputBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
