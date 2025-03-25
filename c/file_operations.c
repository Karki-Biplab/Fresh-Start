#include <stdio.h>
int main() {
    FILE *file;
    char text[100];
    
    // Write to file
    file = fopen("test.txt", "w");
    if (file != NULL) {
        fprintf(file, "Hello, File Operations!\n");
        fprintf(file, "This is line 2.\n");
        fclose(file);
        printf("Data written to file successfully.\n");
    }
    
    // Read from file
    file = fopen("test.txt", "r");
    if (file != NULL) {
        printf("File contents:\n");
        while (fgets(text, sizeof(text), file) != NULL) {
            printf("%s", text);
        }
        fclose(file);
    }
    
    return 0;
}