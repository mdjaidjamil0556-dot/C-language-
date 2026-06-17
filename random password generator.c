#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    char charsert[ ] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234
    56789!@#$%^&* ";
    int length, i;
    printf("enter password length:");
    scanf("%d", &length);
    srand(time(0));
    printf("generated password:");
    for(i = 0; i < length; i++){
        int index = rand() % (sizeof(charset) - 1);
    printf("%c", charset[index]);
    }
    printf("\n");
    return 0;

}
