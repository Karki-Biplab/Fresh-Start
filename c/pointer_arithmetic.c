#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    
    printf("Array using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d, *(ptr+%d) = %d\n", i, arr[i], i, *(ptr + i));
    }
    return 0;
}