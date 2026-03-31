#include <stdio.h>

int main() {
    int i = 8;
    int *j;
    
    // Assign the address of i to pointer j
    j = &i;
    
    // Print address of i using both direct & operator and pointer variable
    printf("Address of i = %u\n", &i);
    printf("Address of i = %u\n", j);
    
    // Print address of the pointer variable itself
    printf("Address of j = %u\n", &j);
    
    // Print the value of i directly
    printf("Value of i = %d\n", i);
    
    // Print the value of i using pointer dereference
    printf("Value of i = %d\n", *j);
    
    return 0;
}   
