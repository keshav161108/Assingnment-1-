#include <stdio.h>

int main() {
    float basic, da, hra, gross;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    printf("Enter DA (Dearness Allowance): ");
    scanf("%f", &da);  
    printf("Enter HRA (House Rent Allowance): ");
    scanf("%f", &hra);
    // Calculate gross salary
    gross = basic + da + hra;
    printf("Gross Salary = %f\n", gross);

    return 0;
}
