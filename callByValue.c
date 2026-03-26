#include <stdio.h>

// Function prototype (uses call by value by default)
void swap(int a, int b);

int main() {
    int n1, n2;

    printf("Enter two numbers: ");
    // Use the [scanf function](https://www.programiz.com) to read input from the user
    scanf("%d %d", &n1, &n2);

    printf("Before swapping in main(): n1 = %d, n2 = %d\n", n1, n2);

    // Call the swap function, passing values
    swap(n1, n2);

    printf("After swapping function call in main(): n1 = %d, n2 = %d\n", n1, n2);
    // The values of n1 and n2 remain unchanged here

    return 0;
}

// Function definition
void swap(int a, int b) {
    int temp;

    // Swapping logic inside the function (affects local copies a and b only)
    temp = a;
    a = b;
    b = temp;

    printf("Inside swap() function: a = %d, b = %d\n", a, b);
}

