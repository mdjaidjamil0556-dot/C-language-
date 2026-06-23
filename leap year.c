#include <stdio.h>
int main(){
    int Y;
    if(scanf("%d", &Y) != 1){
        return 1;
    } 
    if ((Y % 400 ==0) || (Y % 4 ==0 && Y % 100 != 0)) {
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}