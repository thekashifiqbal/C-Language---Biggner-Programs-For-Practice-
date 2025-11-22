#include <stdio.h>

int main() {
    char Array[5] = {10,11,54,78,43};
    printf("%d\n",Array[4]);
    printf("Enter Array 5 number to store :");
    scanf("%d",&Array[5]);
    printf("%d",Array[5]);
    return 0;
}