#include <stdio.h>
int main() {
    int choice;

    do {
        printf("\n1.Hello 2.Bye 3.Exit\n");
        scanf("%d", &choice);

        if(choice == 1)
            printf("Hello\n");
        else if(choice == 2)
            printf("Bye\n");

    } while(choice != 3);

    return 0;
}