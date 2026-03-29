#include<stdio.h>
    struct student{
        char name[50];
        int marks;
    };
    int main() {
        struct student s;
        printf("enter name and marks:");
        scanf("%s %d", s.name, &s.marks);
        printf("name: %s\nmarks: %d", s.name, s.marks);
        return 0;
    }
