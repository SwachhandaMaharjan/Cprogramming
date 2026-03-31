#include <stdio.h>

// Defining the structure to store student details
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Array of structures to store data for n students
    struct Student s[n];

    // Input student information
    printf("\n--- Enter Information ---\n");
    for (i = 0; i < n; i++) {
        printf("For student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    // Displaying student information
    printf("\n--- Displaying Information ---\n");
    for (i = 0; i < n; i++) {
        printf("Name: %s\n", s[i].name);
        printf("Roll: %d\n", s[i].roll);
        printf("Marks: %.2f\n", s[i].marks);
        printf("\n");
    }

    return 0;
}

