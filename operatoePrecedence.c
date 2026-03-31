#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 2;
    int result;

    // Example: * has higher precedence than +
    result = a + b * c;  // Same as a + (b * c)
    printf("a + b * c = %d\n", result);  

    // Example: Parentheses override precedence
    result = (a + b) * c;
    printf("(a + b) * c = %d\n", result);  

    // Example: Left-to-right associativity for + and -
    result = a - b + c;  // Same as (a - b) + c
    printf("a - b + c = %d\n", result);  

    return 0;
}   
