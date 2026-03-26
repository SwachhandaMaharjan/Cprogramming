#include <stdio.h>

int main() {
    char operator;
    double first, second;

    printf("Enter an operator (+, -, *, /): ");
    // The space before %c helps consume any leftover newline characters from previous inputs
    scanf(" %c", &operator); 

    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);

    switch (operator) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
            break;
        case '/':
            // Handle division by zero error
            if (second != 0) {
                printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
            } else {
                printf("Error! Division by zero is not allowed.");
            }
            break;
        // Default case for invalid operator input
        default:
            printf("Error! operator is not correct");
    }

    return 0;
}

