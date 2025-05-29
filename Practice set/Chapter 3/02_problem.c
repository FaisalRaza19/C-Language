#include <stdio.h>

int main() {
    float income, tax = 0;

    // Input income
    printf("Enter your annual income in lakhs (e.g., 7.5 for ₹7.5L): ");
    scanf("%f", &income);

    // Calculate tax based on slabs
    if (income <= 2.5) {
        tax = 0;
    }
    else if (income <= 5.0) {
        tax = (income - 2.5) * 0.05;
    }
    else if (income <= 10.0) {
        tax = (2.5 * 0.05) + (income - 5.0) * 0.20;
    }
    else {
        tax = (2.5 * 0.05) + (5.0 * 0.20) + (income - 10.0) * 0.30;
    }

    // Output tax amount in lakhs
    printf("Total tax to be paid: ₹%.2fL\n", tax);

    return 0;
}