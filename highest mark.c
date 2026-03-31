#include<stdio.h>
struct student {
    char name[50];
int marks;
};
int main(){
    struct student s[3];
    int i, max = 0;
    for(i = 0; i,3; i++) {
        scanf("%s %d", s[i].name, &s[i].marks);

    }
    for(i = 1; i < 3;  i++){
        if(s[i].marks > s[max].marks){
            max = i;
        }
    }
    printf("topper: %s", s[max].name);
    return 0;
}