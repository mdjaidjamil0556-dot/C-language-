#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("test.txt", "w");
    fprint(fp,"hello world");
    fclose(fp);
    printf("data written to file");
    return 0;
    
}