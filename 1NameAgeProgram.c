#include <stdio.h>

int main() {
    char Name[] = "John" ;
    int Age = 30;

    printf("There was a man name %s. \n",Name );
    printf("His age was around %d. \n",Age);
    printf("Then he change his name from %s to JohnWick. \n ", Name);
    char NewName[] = "JohnWick";
    Age = 45;
    printf("Now %s is an assasin with the age of %d. \n", NewName, Age);
    
    return 0;
}