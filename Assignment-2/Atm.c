#include <stdio.h>
#include <string.h>


int login();
int menu();
int checkBalance();
int deposit(int amount);
int withdraw(int amount);

int balance = 5000;


int login() {
    char correctPIN[] = "1234";
    char input[10];

    for (int attempts = 1; attempts <= 3; attempts++) {
        printf("Enter PIN: ");
        scanf("%9s", input);

        if (strcmp(input, correctPIN) == 0) {
            printf("Access granted!\n");
            return 1;  
        } else {
            printf("Incorrect PIN. Attempt %d of 3.\n", attempts);
        }
    }

    printf("Access Denied!\n");
    return 0;   
}



int menu() {
    int choice;
    int amount;

    for (;;) { 
        printf("\nATM MENU\n");
        printf("1. Balance Inquiry\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance();
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%d", &amount);
                deposit(amount);
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%d", &amount);
                withdraw(amount);
                break;

            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}


int checkBalance() {
    printf("Your current balance is: %d\n", balance);
    return 0;
}


int deposit(int amount) {
    if (amount <= 50) {
        printf("Invalid deposit amount.\n");
    } else {
        balance += amount;
        printf("Deposited: %d\n", amount);
        checkBalance();
    }
    return 0;
}

int withdraw(int amount) {
    if (amount <= 50) {
        printf("Invalid withdrawal amount.\n");
    }
    else if (amount > balance) {
        printf("Insufficient balance!\n");
    }
    else {
        balance -= amount;
        printf("Withdrew: %d\n", amount);
        checkBalance();
    }
    return 0;
}


int main() {
    if (login()) {
        menu();
    }
    return 0;
}
