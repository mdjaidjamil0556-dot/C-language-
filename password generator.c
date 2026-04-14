#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    
    int length, i;
    
    printf("Enter password length: ");
    scanf("%d", &length);

    srand(time(0));

    printf("Generated password: ");
    
    for(i = 0; i < length; i++) {
        int index = rand() % (sizeof(charset) - 1);
        printf("%c", charset[index]);
    }

    printf("\n");
    return 0;
}