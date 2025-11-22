// structs use for adding multiple data types in a single unit.


#include <stdio.h>
#include <string.h>

 struct Students {
        char name[50];
        char major[50];
        double gpa;
    };

int main() {
   
    struct Students student1;
    student1.gpa = 3.8;
    strcpy(student1.name,"Kevin");
    strcpy(student1.major,"Computer Science");
    printf("Student1 Name is : %s\n",student1.name);
    printf("Student1 Major is : %s\n",student1.major);
    printf("Student1 Gpa is : %lf\n",student1.gpa);

    
    return 0;
}