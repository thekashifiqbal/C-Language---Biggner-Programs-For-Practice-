#include <stdio.h>

int main()
{
    double num1, num2 ;
    char OP ;
    printf  ("Enter First Number : ");
    scanf ("%lf",& num1);
    printf  ("Enter operator : ");
    scanf (" %c",& OP);
    printf  ("Enter Second Number : ");
    scanf ("%lf",& num2);

        if (OP == '+') {
            printf ("Answer = %f", num1 + num2);
        }
        else if (OP == '-') {
            printf("Answer = %f", num1 - num2);
        } 
        else if (OP == '/') {
            printf("Answer = %f", num1 / num2);
        }
        else if (OP == '*') {
            printf("Answer = %f", num1 - num2);
        }
        else {
            printf("Invalid Operater");
        }
    

    return 0;
}
