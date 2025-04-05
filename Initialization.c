#include <stdio.h>
int s1;
struct student {
        int rollno;
        char name[20];
        float marks;
    };


    int main (){
        // Direct initialization
        struct student s1 = {1, "Rahul", 90.5};

        // Designated initialization
        struct student s2 = {.rollno=1, .name= "Rahul", .marks=90.5};

        // Zero initialization
        struct student s3 = {0};

        // Copy initialization
        struct student s4 = s1;
        s4.rollno = 4;
        
        printf("Roll No: %d, Name: %s, Marks: %.2f \n", s1.rollno, s1.name, s1.marks);

        printf("Roll No: %d, Name: %s, Marks: %.2f \n", s2.rollno, s2.name, s2.marks);
 
        printf("Roll No: %d, Name: %s, Marks: %.2f \n", s3.rollno, s3.name, s3.marks);

        printf("Roll No: %d, Name: %s, Marks: %.2f", s4.rollno, s4.name, s4.marks);
        return 0;
    }