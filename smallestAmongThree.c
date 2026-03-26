#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Prompt the user for input and read three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Compare the numbers to find the smallest
    if (num1 <= num2 && num1 <= num3) {
        printf("%d is the smallest number.\n", num1);
    } else if (num2 <= num1 && num2 <= num3) {
        printf("%d is the smallest number.\n", num2);
    } else {
        printf("%d is the smallest number.\n", num3);
    }

    return 0;
}

