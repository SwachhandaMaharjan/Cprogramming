#include <stdio.h>
#include <string.h> // Required for strcpy

// Define the structure
struct student {
    char name[50];
    int age;
};

// Function prototype (pass by value)
void display(struct student s);

int main() {
    struct student s1;
    strcpy(s1.name, "Bond"); // Use strcpy for string assignment
    s1.age = 13;

    display(s1); // Passing the structure as an argument

    return 0;
}

// Function definition
void display(struct student s) {
    printf("Displaying information\n");
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
}

