#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Take user input for principal, rate, and time
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    
    printf("Enter time in years: ");
    scanf("%f", &time);

    // Calculate simple interest using the formula
    simpleInterest = (principal * rate * time) / 100;

    // Display the result with two decimal places
    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}

