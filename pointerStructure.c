#include <stdio.h>
#include <string.h> // Required for strcpy

// Define a structure named 'Person'
struct Person {
    char name[50];
    int age;
    float weight;
};

int main() {
    // 1. Declare and initialize a structure variable
    struct Person person1;
    strcpy(person1.name, "John Doe");
    person1.age = 30;
    person1.weight = 75.5;

    // 2. Declare a pointer to the 'Person' structure
    struct Person *personPtr;

    // 3. Assign the address of the structure variable to the pointer
    personPtr = &person1;

    // 4. Access and print structure members using the pointer (arrow operator)
    printf("Original Data:\n");
    printf("Name: %s\n", personPtr->name);
    printf("Age: %d\n", personPtr->age);
    printf("Weight: %.2f\n", personPtr->weight);

    // 5. Modify structure members using the pointer
    personPtr->age = 35;
    personPtr->weight = 80.2;

    // 6. Print the updated data using the original variable to confirm changes
    printf("\nUpdated Data:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Weight: %.2f\n", person1.weight);

    return 0;
}

