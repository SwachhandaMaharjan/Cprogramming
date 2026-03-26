#include <stdio.h>

int main() {
    int n, i;

    // Ask user for the number of times to display the message
    printf("Enter the number of times to display 'Get Well Soon': ");
    scanf("%d", &n);

    // Loop to print the message n times
    for(i = 1; i <= n; i++) {
        printf("%d: Get Well Soon!\n", i);
    }

    return 0;
}

