#include<stdio.h>
void increment(int*x){
    (*x)++;
}
int main(){
    int n;
    scanf("%d", &n);
    increment(&n);
    printf("After Increment = %d\n", n);
    return 0;
}