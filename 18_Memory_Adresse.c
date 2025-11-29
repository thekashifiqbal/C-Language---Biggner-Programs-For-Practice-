#include <stdio.h>

int main() {
    int age = 30;
    double gpa = 3.8;
    char grade = 'A';
    printf("Age : %p\nGpa : %p\nGrade : %p\n",&age, &gpa, &grade);
    
    return 0;

}
