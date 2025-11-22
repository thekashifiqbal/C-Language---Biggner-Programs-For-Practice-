#include <stdio.h>

int main() {
    char Grade;
    printf("Enter Your Grade : ");
    scanf(" %c",&Grade);
    switch (Grade)
    {
    case 'A':
        printf("You Did Great in Exams\n");
        break;
    case 'B':
        printf("You Did Good in Exams\n");
        break;
    case 'C':
        printf("You Did better in Exams\n");
    break;
    case 'D':
        printf("You Did pass in Exams\n");
    break;
    case 'E':
        printf("You Did Bad in Exams\n");
        break;
    case 'F':
        printf("You Did Failed in Exams\n");
        break;
    default:
        printf("Invalid Grade, Try Entering again.\n");
        break;
    }
    return 0;
}