#include <stdio.h>
int main() {
    int num;
    do {
        printf("Enter a positive number (0 to exit): ");
        scanf("%d", &num);
        if (num > 0) {
            printf("Square: %d\n", num * num);
        }
    } while (num != 0);
    return 0;
}