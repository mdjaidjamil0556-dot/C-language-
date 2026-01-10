#include <stdio.h>

struct academicdetails {
    int rollno;
    float marks[3];
};

struct personaldetails {
    char name[20];
    int age;
    struct academicdetails atd;
};

int main() {
    struct personaldetails p;
    int i;

    printf("Enter the name: ");
    scanf("%s", p.name);

    printf("Enter the age: ");
    scanf("%d", &p.age);

    printf("Enter the roll number: ");
    scanf("%d", &p.atd.rollno);

    printf("Enter marks of 3 subjects:\n");
    for (i = 0; i < 3; i++) {
        scanf("%f", &p.atd.marks[i]);
    }

    printf("\n----- Student Details -----\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Roll No: %d\n", p.atd.rollno);

    for (i = 0; i < 3; i++) {
        printf("Marks of subject %d: %.2f\n", i + 1, p.atd.marks[i]);
    }

    return 0;
}
