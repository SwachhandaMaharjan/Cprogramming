#include <stdio.h>

int main() {
    int n;          // To store the upper limit
    int sum = 0;    // To store the sum of the squares
    int i;          // Loop counter

    // Prompt the user for input
    printf("Enter the value for n: ");
    scanf("%d", &n);

    // Calculate the sum of squares using a for loop
    for (i = 1; i <= n; i++) {
        sum += i * i; // Add the square of the current number to the sum
    }

    // Print the result
    printf("The sum of the squares of the first %d natural numbers is %d\\n", n, sum);

    return 0;
}

