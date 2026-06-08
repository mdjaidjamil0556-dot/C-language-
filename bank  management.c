#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account acc[100];
    int n = 0, choice, accNo, i, found;
    float amount;

    do {
        printf("\n===== BANK MANAGEMENT SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Search Account\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("\nEnter Account Number: ");
            scanf("%d", &acc[n].accNo);

            printf("Enter Account Holder Name: ");
            scanf("%s", acc[n].name);

            printf("Enter Initial Balance: ");
            scanf("%f", &acc[n].balance);

            n++;
            printf("Account Created Successfully!\n");
            break;

        case 2:
            if(n == 0) {
                printf("No Accounts Found!\n");
            } else {
                printf("\n--- Account Details ---\n");
                for(i = 0; i < n; i++) {
                    printf("\nAccount No : %d", acc[i].accNo);
                    printf("\nName       : %s", acc[i].name);
                    printf("\nBalance    : %.2f\n", acc[i].balance);
                }
            }
            break;

        case 3:
            printf("Enter Account Number: ");
            scanf("%d", &accNo);

            found = 0;

            for(i = 0; i < n; i++) {
                if(acc[i].accNo == accNo) {
                    printf("Enter Deposit Amount: ");
                    scanf("%f", &amount);

                    acc[i].balance += amount;

                    printf("Amount Deposited Successfully!\n");
                    printf("Updated Balance = %.2f\n", acc[i].balance);

                    found = 1;
                    break;
                }
            }

            if(found == 0)
                printf("Account Not Found!\n");

            break;

        case 4:
            printf("Enter Account Number: ");
            scanf("%d", &accNo);

            found = 0;

            for(i = 0; i < n; i++) {
                if(acc[i].accNo == accNo) {

                    printf("Enter Withdrawal Amount: ");
                    scanf("%f", &amount);

                    if(amount <= acc[i].balance) {
                        acc[i].balance -= amount;

                        printf("Withdrawal Successful!\n");
                        printf("Remaining Balance = %.2f\n",
                               acc[i].balance);
                    }
                    else {
                        printf("Insufficient Balance!\n");
                    }

                    found = 1;
                    break;
                }
            }

            if(found == 0)
                printf("Account Not Found!\n");

            break;

        case 5:
            printf("Enter Account Number: ");
            scanf("%d", &accNo);

            found = 0;

            for(i = 0; i < n; i++) {
                if(acc[i].accNo == accNo) {

                    printf("\nAccount Found\n");
                    printf("Account No : %d\n", acc[i].accNo);
                    printf("Name       : %s\n", acc[i].name);
                    printf("Balance    : %.2f\n", acc[i].balance);

                    found = 1;
                    break;
                }
            }

            if(found == 0)
                printf("Account Not Found!\n");

            break;

        case 6:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}