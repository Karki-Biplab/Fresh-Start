#include <stdio.h>
union Data {
    int i;
    float f;
    char str[20];
};
int main() {
    union Data data;
    
    data.i = 10;
    printf("data.i: %d\n", data.i);
    
    data.f = 220.5;
    printf("data.f: %.1f\n", data.f);
    printf("data.i after setting f: %d\n", data.i);  // Will be corrupted
    
    return 0;
}
