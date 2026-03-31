#include <stdio.h>

int main() {
    int a, b, c;
    
    // Ask user for input
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // Compare and find the smallest
    if (a <= b && a <= c) {
        printf ("%d is the smallest.\n", a);
    } 
    else if (b <= a && b <= c) {
        printf("%d is the smallest.\n", b);
    } 
    else {
        printf("%d is the smallest.\n", c);
    }
    
    return 0;
}

