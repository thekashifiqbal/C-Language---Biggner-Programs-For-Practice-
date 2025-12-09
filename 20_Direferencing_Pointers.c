#include <stdio.h>

int main() {
    int age = 30;
    int * pAge = &age;
    printf("Age: %p\n", *pAge);
    printf("age: %d\n",&age);
    return 0;

}



