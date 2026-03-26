#include <stdio.h>

int main() {
    int n;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    
    // Read the input from the user
    scanf("%d", &n);

    // Check if the number is divisible by 5 using the modulo operator
    if (n % 5 == 0) {
        printf("%d is divisible by 5.\n", n);
   
   
   }

    return 0;
}

