#include <stdio.h>

int main() {
    int num1=10, num2=4;
    int sum, difference, product, quotient,modulus;

    

    // Perform arithmetic operations
    sum = num1 + num2;
    printf("a+b=%d\n",sum);
    
    difference = num1 - num2;
    printf("a-b=%d\n",difference);
    
    product = num1 * num2;
    printf("a*b=%d\n",product);
    
    quotient = num1/num2;
    printf("a/b=%d\n",quotient);
    
    modulus = num1%num2;
    printf("a%b=%d\n",modulus);

    
    return 0;
}   
