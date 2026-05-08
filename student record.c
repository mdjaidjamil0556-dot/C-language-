#include<stdio.h>
struct student {
char name[50];
int roll;
float marks;    
};
int main(){
    struct student s[100];
    int n, i, choice;
    int topperIndex = 0;
    printf("enter number of students ");
    scanf("%d", &n);
    //input student details
    for(i = 0; i < n; i++){
        printf("\nenter details of student %d\n", i+1);
        printf("name");
        scanf("%s", s[i].name);
        printf("roll");
        scanf("%d", &[i].roll);
        printf("marks", &[i].marks);

    }
    //menu
    do{
        printf("\n----menu----\n");
        printf("1. display students\n");
        printf("2. find topper\n");
        printf("3. exit\n");

        printf("enter your choice");
        scanf("%d", &choice);
        case 1:
        printf("\n----student list----\n");
        for(i = 0; i < n; i++){
            printf("\nstudent %d\n", i + 1);
            printf("name: %s\n", s[i].name);
            printf("roll: %d\n", s[i].roll);
            printf("marks: %.2f\n", s[i].marks);
        }
        break;
        case 2:
        topperIndex = 0;
        for(i = 1; i < n; i++){
            if(s[i].marks > s[topperIndex].marks){
            topperIndex = i;
        }
    }
    printf("\n---topper----\n");
    printf("name: %s\n", s[topperIndex].name);
    printf("roll: %d\n", s[topperIndex].roll);
    printf("marks: %.2f\n", s[topperIndex].marks);
    break;
    case 3:
    printf("exiting program...\n");
    break;
    default:
    printf("invalid choice! try again.\n");


}
while(choice != 3);
return 0;
}