#include <stdio.h>

int main() {
    // 1. Declare a character variable
    char my_char = 'Z';

    // 2. Declare a character pointer
    // The asterisk (*) denotes that it is a pointer variable
    char *char_ptr; 

    // 3. Initialize the pointer with the address of the character variable
    // The ampersand (&) operator is used to get the memory address of a variable
    char_ptr = &my_char; 

    // Print the value and address of the character variable using both the variable name and the pointer
    printf("--- Using the variable name ---\n");
    printf("Value of my_char: %c\n", my_char); // %c for character value
    printf("Address of my_char: %p\n", &my_char); // %p for pointer (address) value

    printf("\n--- Using the pointer ---\n");
    // The asterisk (*) here is the dereference operator, accessing the value at the address the pointer holds
    printf("Value pointed to by char_ptr: %c\n", *char_ptr); 
    // Printing the pointer directly gives the address it stores
    printf("Address stored in char_ptr: %p\n", char_ptr); 

    // Example of changing the value via the pointer
    *char_ptr = 'A'; 
    printf("\n--- After changing the value via the pointer ---\n");
    printf("New value of my_char: %c\n", my_char); 

    return 0;
}

