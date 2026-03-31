#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int *ptr1, *ptr2;
    int i;

    // Using malloc: Allocates uninitialized memory
    ptr1 = (int*)malloc(5 * sizeof(int));
    if (ptr1 == NULL) {
        printf("malloc failed\n");
        return 1;
    }
    printf("malloc: ");
    for (i = 0; i < 5; i++) {
        ptr1[i] = i + 1;
        printf("%d ", ptr1[i]);
    }

    // Using calloc: Allocates and initializes memory to zero
    ptr2 = (int*)calloc(5, sizeof(int));
    if (ptr2 == NULL) {
        printf("\ncalloc failed\n");
        free(ptr1);
        return 1;
    }
    printf("\ncalloc: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", ptr2[i]);
    }

    // Using realloc: Resizes memory allocated by malloc
    ptr1 = (int*)realloc(ptr1, 10 * sizeof(int));
    if (ptr1 == NULL) {
        printf("\nrealloc failed\n");
        free(ptr2);
        return 1;
    }
    printf("\nrealloc (after extending): ");
    for (i = 5; i < 10; i++) {
        ptr1[i] = i + 1;
    }
    for (i = 0; i < 10; i++) {
        printf("%d ", ptr1[i]);
    }

    // Using free: Deallocates memory
    free(ptr1);
    free(ptr2);
    ptr1 = NULL;
    ptr2 = NULL;

    printf("\nMemory successfully freed.\n");
    return 0;
}   
