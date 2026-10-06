#include <stdio.h>

int main() {
    int n, rem, rev = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    do {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    } while(n != 0);

    printf("Reverse = %d", rev);

    return 0;
}