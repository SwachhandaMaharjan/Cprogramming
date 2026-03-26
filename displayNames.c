#include <stdio.h>

int main() {
    int choice;

    // Display Menu
    printf("1. Facebook\n");
    printf("2. Google\n");
    printf("3. Instagram\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // Using switch case with break
    switch(choice) {
        case 1:
            printf("Displaying: Facebook\n");
            break; // Exits switch after displaying
        case 2:
            printf("Displaying: Google\n");
            break; // Exits switch
        case 3:
            printf("Displaying: Instagram\n");
            break; // Exits switch
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

