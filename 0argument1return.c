#include <stdio.h>

// Function declaration (prototype)
void add_numbers();

int main() {
    // Call the function to perform addition and display the result
    add_numbers(); 
    return 0;
}

// Function definition
void add_numbers() {
    int num1, num2, sum; // Declare local variables

    // Prompt user for input
    printf("Enter two integers: ");
    // Read input from the user
    scanf("%d %d", &num1, &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Print the result
    printf("Sum: %d\n", sum);
}

