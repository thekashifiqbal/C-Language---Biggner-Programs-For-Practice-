
#include <stdio.h>

int add(int a , int b) {
    return a + b;
}
int main (void) {
    int result = add(20,30);
    printf("The sum is: %d\n", result);
    
    return 0;
}
