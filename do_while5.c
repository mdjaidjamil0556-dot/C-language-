#include <stdio.h>

int main() {
    int n, original, rem, rev = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    original = n;

    do {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    } while(n != 0);

    if(original == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}