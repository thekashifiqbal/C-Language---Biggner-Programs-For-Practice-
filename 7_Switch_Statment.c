#include <stdio.h>

int main() {
    int choice ;
    printf("Enter a Number between 1 to 3: ");   
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("You selected Option 1\n");
            break;
        case 2:
            printf("You selected Option 2\n");
            break;
        case 3:
            printf("You selected Option 3\n");
            break;
        default:
            printf("Invalid Option! Please select a number between 1 to 3.\n");
            break;
    }
    return 0;
}