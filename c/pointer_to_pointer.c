#include <stdio.h>
int main() {
    int num = 100;
    int *ptr1 = &num;
    int **ptr2 = &ptr1;
    
    printf("Value of num: %d\n", num);
    printf("Value using ptr1: %d\n", *ptr1);
    printf("Value using ptr2: %d\n", **ptr2);
    
    printf("Address of num: %p\n", &num);
    printf("Value of ptr1: %p\n", ptr1);
    printf("Value of ptr2: %p\n", ptr2);
    return 0;
}