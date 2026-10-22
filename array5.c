#include <stdio.h>

int main() {
    int n, i, a[100];
    int currentSum, maxSum;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    currentSum = a[0];
    maxSum = a[0];

    for (i = 1; i < n; i++) {
        if (currentSum + a[i] > a[i]) {
            currentSum = currentSum + a[i];
        } else {
            currentSum = a[i];
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("%d", maxSum);

    return 0;
}