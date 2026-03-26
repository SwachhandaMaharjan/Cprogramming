#include <stdio.h>
#define PI 3.14159 // Defining the value of PI

// Function declaration (prototype)
float calculateArea(float radius);

int main() {
    float radius, area;

    // Prompt the user for input
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Call the function with the radius as an argument
    area = calculateArea(radius);

    // Display the result
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}

// Function definition
float calculateArea(float radius) {
    // Calculate the area using the formula A = PI * r * r
    float area_val = PI * radius * radius;
    // Return the calculated area
    return area_val;
}

