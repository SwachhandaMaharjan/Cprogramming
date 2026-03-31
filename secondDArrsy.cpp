#include <stdio.h>
int main() {
    int matrix[3][3]; // Declaration for 3x3 matrix
    int i, j;

    // Input from user
    printf("Enter 3x3 matrix elements:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix
    printf("Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Example: Add 1 to every element
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            matrix[i][j] += 1;
        }
    }
    
    printf("Modified Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}   
