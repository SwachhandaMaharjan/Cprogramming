#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 8;
    int result;

    // Logical AND (&&) - both conditions must be true
    result = (a > 0 && b > 0);
    printf("Logical AND (a > 0 && b > 0): %d\n", result); // Output: 1 (true)

    // Logical OR (||) - at least one condition must be true
    result = (a > 10 || b < 15);
    printf("Logical OR (a > 10 || b < 15): %d\n", result); // Output: 1 (true)

    // Logical NOT (!) - negates the condition
    result = !(a == b);
    printf("Logical NOT (!(a == b)): %d\n", result); // Output: 1 (true)

   

    return 0;
}   
