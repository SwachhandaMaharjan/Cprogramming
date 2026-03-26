#include <stdio.h>
#define PI 3.14159 // Define PI as a constant for precision

// Function declaration: takes a float argument, returns nothing (void)
void calculateArea(float radius);

int main() {
    float radius;

    // Prompt user for input in the main function
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius); // Read user input

    // Call the function, passing the radius as an argument
    calculateArea(radius);

    return 0;
}

// Function definition: calculates and prints the area
void calculateArea(float rad) {
    float area;
    // Calculate the area using the formula: Area = PI * r * r
    area = PI * rad * rad;

    // Print the result within the function
    printf("The area of the circle is: %.2f\n", area);
}

