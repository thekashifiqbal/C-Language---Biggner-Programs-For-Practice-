#include <stdio.h>
int add (int a , int b) {
    return a + b;
}

int main() {
    int a, b;
    printf("Enter Two Numbers to Add: ");
    scanf("%d %d", &a, &b);
    int result = add(a, b);
    printf("The sum is: %d\n", result);
    return 0;
}
