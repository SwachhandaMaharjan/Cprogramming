#include <stdio.h>

// Function prototype: The function accepts pointers to integers
void swap(int *a, int *b);

int main() {
    int num1 = 10;
    int num2 = 20;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call the function by passing the addresses of the variables
    swap(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

// Function definition: Uses pointers to access and modify the original values
void swap(int *a, int *b) {
    int temp;
    temp = *a; // Store the value at the address of 'a'
    *a = *b;   // Assign the value at the address of 'b' to the address of 'a'
    *b = temp; // Assign the temporary value to the address of 'b'

    printf("Inside function: a = %d, b = %d\n", *a, *b);
}

