#include <stdio.h>

int main() {
    int units;
    float amount = 0.0;

    // Prompt the user to enter the number of units consumed
    printf("Enter total units consumed: ");
    if (scanf("%d", &units) != 1 || units < 0) {
        printf("Invalid input! Units consumed cannot be negative.\n");
        return 1;
    }

    // Calculate the bill amount based on consumption tiers
    if (units <= 200) {
        amount = units * 0.50;
    } 
    else if (units <= 400) {
        amount = 100.0 + ((units - 200) * 0.65);
    } 
    else if (units <= 600) {
        amount = 230.0 + ((units - 400) * 0.80);
    } 
    else {
        // Uses 125.00 as requested. Change to 1.25 if it was a typo in the question.
        amount = 425.0 + ((units - 600) * 125.00); 
    }

    // Print the final amount to be paid
    printf("\n--- Electricity Bill Summary --- \n");
    printf("Total Units Consumed: %d\n", units);
    printf("Total Amount to Pay:  Rs. %.2f\n", amount);

    return 0;
}
