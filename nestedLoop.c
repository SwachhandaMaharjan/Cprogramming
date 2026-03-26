#include <stdio.h>

int main() {
    int rows, columns;
    int i,j;

    // Get input from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    // Outer loop for the number of rows
    for (i = 1; i <= rows; i++) {
        // Inner loop for the number of columns
        for ( j = 1; j <= columns; j++) {
            printf("*");
        }
        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}

