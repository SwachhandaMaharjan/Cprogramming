#include <stdio.h>

int main() {
    int a = 10, b = 5;

    // Basic assignment
    int c = a;
    printf("c = a: %d\n", c);

    // Compound assignment operators
    a += b;  // a = a + b
    printf("a += b: %d\n", a);

    a -= 3;  // a = a - b
    printf("a -= b: %d\n", a);

    a *= 2;  // a = a * b
    printf("a *= b: %d\n", a);

    a /= b;  // a = a / b
    printf("a /= b: %d\n", a);

    a %= 3;  // a = a % b
    printf("a %%= b: %d\n", a);

    return 0;
}    
