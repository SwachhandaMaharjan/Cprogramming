#include <stdio.h>
#include <stdlib.h>

// Structure to hold student data
struct Student {
    int id;
    char name[50];
    float score;
};

void createFile();
void addStudent();
void displayRecords();

int main() {
    int choice;
    do {
        printf("\nSTUDENT RECORD SYSTEM\n");
        printf("1. Create new records file\n");
        printf("2. Add student record\n");
        printf("3. Display all records\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                createFile();
                break;
            case 2:
                addStudent();
                break;
            case 3:
                displayRecords();
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 4);
    return 0;
}

void createFile() {
    FILE *fptr;
    fptr = fopen("students.txt", "w");
    if (fptr == NULL) {
        printf("Error creating file!\n");
        return;
    }
    fprintf(fptr, "STUDENT RECORDS DATABASE\n");
    fprintf(fptr, "ID\tNAME\t\tSCORE\n");
    fprintf(fptr, "----------------------------\n");
    fclose(fptr);
    printf("New records file created successfully!\n");
}

void addStudent() {
    FILE *fptr;
    struct Student student;
    fptr = fopen("students.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file. Create a new file first!\n");
        return;
    }
    printf("Enter student ID: ");
    scanf("%d", &student.id);
    printf("Enter student name: ");
    while(getchar() != '\n'); 
    fgets(student.name, 50, stdin);
    // Remove newline character
    int i;
    for(i = 0; student.name[i] != '\0'; i++) {
        if(student.name[i] == '\n') {
            student.name[i] = '\0';
            break;
        }
    }
    printf("Enter student score: ");
    scanf("%f", &student.score);
    fprintf(fptr, "%d\t%s\t\t%.2f\n", student.id, student.name, student.score);
    fclose(fptr);
    printf("Student record added successfully!\n");
}

void displayRecords() {
    FILE *fptr;
    char buffer[100];
    fptr = fopen("students.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file. No records found!\n");
        return;
    }
    printf("\n--- DISPLAYING ALL RECORDS ---\n");
    while (!feof(fptr)) {
        if (fgets(buffer, 100, fptr) != NULL) {
            printf("%s", buffer);
        }
    }
    fclose(fptr);
}   
