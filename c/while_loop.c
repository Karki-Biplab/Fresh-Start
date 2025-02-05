#include <stdio.h>
int main() {
    int i = 1, sum = 0;
    while (i <= 5) {
        sum += i;
        i++;
    }
    printf("Sum of 1 to 5: %d\n", sum);
    return 0;
}