#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct Student s1 = {"John Doe", 101, 85.5};
    
    printf("Student Details:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("Marks: %.1f\n", s1.marks);
    return 0;
}
