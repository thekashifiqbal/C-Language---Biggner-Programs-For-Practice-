#include <stdio.h>
#include <string.h>

 struct Students {
        char name[50];
        char major[50];
        char Grade ;
        double gpa;
    };

int main() {
   
    struct Students student1;
    printf("Enter Student Name: \n");
    scanf("%49s", student1.name);
    printf("Enter Student Major: \n");
    scanf("%49s", student1.major);
    printf("Enter Student Grade: \n");
    scanf(" %c", &student1.Grade);
    printf("Enter Student Gpa: \n");
    scanf("%lf", &student1.gpa);
    
    printf("Student1 Name is : %s\n",student1.name);
    printf("Student1 Major is : %s\n",student1.major);
    printf("Student1 Grade is : %c\n",student1.Grade);
    printf("Student1 Gpa is : %lf\n",student1.gpa);

    
    return 0;
}