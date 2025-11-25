#include <stdio.h>

int main() {
 int twoDArray [3][2] = {
     {62,81},
     {40,15},
     {11,32}
     
 }   ;
 int i, j;
 for(i = 0; i < 3; i++) {
     for(j=0; j < 2; j++) {
         printf("%d,", twoDArray[i] [j]);
     }
     printf("\n");
 }
    
    return 0;
}