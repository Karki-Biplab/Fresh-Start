#include <stdio.h>
#include <string.h>
void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len/2; i++) {
        char temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
}
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
