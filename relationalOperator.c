#include <stdio.h>

int main() {
    int a = 10, b = 4;

    printf("a == b: %d\n", a == b); // 0 (false)
    printf("a != b: %d\n", a != b); // 1 (true)
    printf("a > b: %d\n", a > b);   // 1 (true)
    printf("a < b: %d\n", a < b);   // 0 (false)
    printf("a >= b: %d\n", a >= b); // 1 (true)
    printf("a <= b: %d\n", a <= b); // 0 (false)

    return 0;
}   
