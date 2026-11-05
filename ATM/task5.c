
/*#include <stdio.h>
#include <stdbool.h>

#define MAX_ATTEMPTS 3
#define STORED_PIN 4444

float balance = 0.0;

bool login() {
    int pin, attempts = 0;

    while (attempts < MAX_ATTEMPTS) {
        printf("Enter your PIN: ");
        scanf("%d", &pin);

        if (pin == STORED_PIN) {
            return true; // Successful login
        } else {
            attempts++;
            printf("Incorrect PIN. You have %d attempts left.\n", MAX_ATTEMPTS - attempts);
        }
    }
    printf("Maximum attempts exceeded. Access denied.\n");
    return false; // Failed login
}

void checkBalance() {
    printf("Current balance: $%.2f\n", balance);
}

void deposit(float amount) {
    if (amount > 0) {
        balance += amount;
        printf("Deposited: $%.2f\n", amount);
    } else {
        printf("Deposit amount must be positive.\n");
    }
}

void withdraw(float amount) {
    if (amount > 0) {
        if (amount <= balance) {
            balance -= amount;
            printf("Withdrew: $%.2f\n", amount);
        } else {
            printf("Insufficient balance for withdrawal.\n");
        }
    } else {
        printf("Withdrawal amount must be positive.\n");
    }
}

void displayMenu() {
    int choice;
    float amount;

    do {
        printf("\nMenu:\n");
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
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                deposit(amount);
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(amount);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);
}

int main() {
    if (login()) {
        displayMenu();
    }
    return 0;
}*/
