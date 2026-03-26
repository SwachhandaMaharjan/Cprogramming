#include <stdio.h>

// Function prototype for the recursive function
unsigned long long factorial(int n);

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n); //

    // Check for negative numbers, as factorials are not defined for them
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\\n");
    } else {
        printf("Factorial of %d is %llu\\n", n, factorial(n)); //
    }

    return 0;
}

// Recursive function to find the factorial of a number
unsigned long long factorial(int n) {
    // Base case: when n is 0 or 1, the recursion stops and returns 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n * factorial of (n-1)
        return n * factorial(n - 1);
    }
}

