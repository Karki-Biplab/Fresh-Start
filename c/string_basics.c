#include <stdio.h>
#include <string.h>
int main() {
    char str1[50] = "Hello";
    char str2[] = " World";
    
    printf("Length of str1: %lu\n", strlen(str1));
    strcat(str1, str2);
    printf("After concatenation: %s\n", str1);
    return 0;
}