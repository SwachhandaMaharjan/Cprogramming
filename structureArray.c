#include <stdio.h>
#include <string.h>

// Define a structure named 'Person'
struct Person {
    char name[50];
    int age;
};

int main() {
    // 1. Declare and initialize a structure variable
    struct Person person1;
    
    // Assign values to the structure members using the dot (.) operator
    strcpy(person1.name, "John Doe");
    person1.age = 30;

    // 2. Declare a pointer to the 'Person' structure
    struct Person *personPtr;

    // 3. Initialize the pointer to hold the address of the structure variable
    personPtr = &person1;

    // 4. Access and modify structure members using the arrow (->) operator
    // The arrow operator is used with a structure pointer to access members it points to.
    printf("Original Age: %d\n", personPtr->age);
    personPtr->age = 31; // Modify the age via the pointer
    
    // We can also access the members using the dereference (*) operator and dot operator (.), like so:
    // (*personPtr).age = 31; // This is equivalent to personPtr->age

    // 5. Print the updated values
    printf("Updated Name: %s\n", personPtr->name);
    printf("Updated Age: %d\n", personPtr->age);

    return 0;
}

