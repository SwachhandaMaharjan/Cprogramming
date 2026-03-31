#include <stdio.h>

int main() {
    // Declare and initialize an integer array
    int data[5] = {10, 20, 30, 40, 50};
    // Declare a pointer to an integer
    int *ptr;

    // Assign the address of the first element of the array to the pointer.
    // 'data' (the array name) itself acts as a pointer to the first element (&data[0]).
    ptr = data; // or ptr = &data[0];

    printf("Accessing array elements using pointer:\n");
	int i;
    // Loop through the array using pointer arithmetic
    for ( i = 0; i < 5; i++) {
        // Access the value at the address (ptr + i) using the dereference operator *
        printf("Element %d: %d\n", i, *(ptr + i));
    }

    return 0;
}

