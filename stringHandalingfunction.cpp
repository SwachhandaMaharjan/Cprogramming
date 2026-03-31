#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];
    int len;

    // strlen: Get string length
    len = strlen(str1);
    printf("Length of str1: %d\n", len);

    // strcpy: Copy string
    strcpy(str3, str1);
    printf("After strcpy, str3: %s\n", str3);

    // strcat: Concatenate strings
    strcat(str1, " ");
    strcat(str1, str2);
    printf("After strcat, str1: %s\n", str1);

    // strcmp: Compare strings
    if (strcmp(str3, str2) == 0) {
        printf("str3 and str2 are equal\n");
    } else {
        printf("str3 and str2 are not equal\n");
    }

    // strstr: Find substring
    char *found = strstr(str1, "World");
    if (found) {
        printf("Substring 'World' found in str1\n");
    }

    return 0;
}   
