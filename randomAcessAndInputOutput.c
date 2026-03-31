#include <stdio.h>
#include <stdlib.h>

struct Record {
    int id;
    char name[20];
};

int main() {
    FILE *fp;
    struct Record rec;

    // 1. Create and Write to a file (Input/Output)
    fp = fopen("data.bin", "wb+"); // open for binary writing and reading
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    struct Record r1 = {1, "Alice"};
    struct Record r2 = {2, "Bob"};
    
    fwrite(&r1, sizeof(struct Record), 1, fp);
    fwrite(&r2, sizeof(struct Record), 1, fp);

    // 2. Random Access: Read the 2nd record directly
    // Move pointer to the start of the second record
    fseek(fp, sizeof(struct Record), SEEK_SET); 
    
    fread(&rec, sizeof(struct Record), 1, fp);
    printf("Random Access Result: ID: %d, Name: %s\n", rec.id, rec.name);

    // 3. Check current position
    long pos = ftell(fp);
    printf("Current pointer position: %ld bytes\n", pos);

    fclose(fp);
    return 0;
}
