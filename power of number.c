#include <stdio.h>
int main() {
    int a, b, i = 1, result = 1;
    scanf("%d %d", &a, &b);

    do {
        result *= a;
        i++;
    } while(i <= b);

    printf("Result = %d", result);
    return 0;
}