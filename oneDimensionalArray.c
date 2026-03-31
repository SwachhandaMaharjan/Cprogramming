#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50}; // Declaration and initialization
    int i;
    
    // Printing elements
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    
    // Modifying an element
    arr[2] = 99; 
    printf("\nModified array: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
