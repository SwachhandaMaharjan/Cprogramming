#include <stdio.h>

// Function declaration: accepts two integer pointers as arguments
void swap(int *n1, int *n2);

int main() {
    int num1 = 5, num2 = 10;

    printf("Original values:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    // Pass the addresses of num1 and num2 to the swap function
    swap(&num1, &num2);

    printf("\nValues after swap:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}

// Function definition: uses dereference operator (*) to access and modify the actual values at the addresses
void swap(int* n1, int* n2) {
    int temp;

    // Access the value at the address of n1 and store in temp
    temp = *n1;

    // Change the value at the address of n1 to the value at the address of n2
    *n1 = *n2;

    // Change the value at the address of n2 to the value stored in temp
    *n2 = temp;
}

