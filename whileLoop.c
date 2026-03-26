#include <stdio.h>

int main() {
    int i = 0; // Initialize the loop counter to 1

    printf("Numbers from 1 to 10:\\n");

    while (i <= 10) { // Loop continues as long as 'i' is less than or equal to 10
        printf("%d\n", i); // Print the current number followed by a newline
        i++;               // Increment the counter in each iteration
    }
	//printf("%d",i)
    return 0; // Indicate successful program execution
}

