#include <stdio.h>

int main() {
    int i;

    printf("For loop:\n");
    for(i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    printf("\nWhile loop:\n");
    i = 1;
    while(i <= 5) {
        printf("%d ", i);
        i++;
    }

    return 0;
}