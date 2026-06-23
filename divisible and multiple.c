#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 7 == 0 && num % 4 != 0 && num % 6 == 0) {
        printf("%d satisfies all the conditions.\n", num);
    } else {
        printf("%d does not satisfy the conditions.\n", num);
    }

    return 0;
}
