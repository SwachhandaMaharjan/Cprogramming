#include <stdio.h>

// First structure: Address
struct Address {
    char street[30];
    char city[20];
    int pin;
};

// Second structure: Student (contains Address as a nested member)
struct Student {
    char name[50];
    int roll;
    struct Address addr; 
};

int main() {
    struct Student s1;

    // Input student details
    printf("Enter Student Name: ");
    scanf("%s", s1.name);
    printf("Enter Roll Number: ");
    scanf("%d", &s1.roll);

    // Input nested address details
    printf("Enter Street: ");
    scanf("%s", s1.addr.street);
    printf("Enter City: ");
    scanf("%s", s1.addr.city);
    printf("Enter PIN Code: ");
    scanf("%d", &s1.addr.pin);

    // Displaying data
    printf("\n--- Student Record ---\n");
    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("Address: %s, %s (PIN: %d)\n", s1.addr.street, s1.addr.city, s1.addr.pin);

    return 0;
}

