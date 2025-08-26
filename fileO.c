#include <stdio.h>

int main() {
    FILE *fptr;

    // Write to file
    fptr = fopen("sample.txt", "w");
    if(fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fprintf(fptr, "Hello, this is a file I/O example.\n");
    fclose(fptr);

    // Read from file
    char str[100];
    fptr = fopen("sample.txt", "r");
    if(fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    while(fgets(str, 100, fptr) != NULL)
        printf("%s", str);
    fclose(fptr);

    return 0;
}
