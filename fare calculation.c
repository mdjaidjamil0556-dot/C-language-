#include <stdio.h>

int main() {
    int distance;
    float fare;

    printf("Enter Distance (KM): ");
    scanf("%d", &distance);

    fare = distance * 1.5;

    printf("Total Fare = Rs %.2f", fare);

    return 0;
}