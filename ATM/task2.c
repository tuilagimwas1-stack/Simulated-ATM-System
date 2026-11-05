/*#include <stdio.h>
#include <stdbool.h>

#define MAX_ATTEMPTS 3
#define STORED_PIN 4444

bool login() {
    int pin, attempts = 0;

    while (attempts < MAX_ATTEMPTS) {
        printf("Enter your PIN: ");
        scanf("%d", &pin);

        if (pin == STORED_PIN) {
            return true;
        } else {
            attempts++;
            printf("Incorrect PIN. You have %d attempts left.\n", MAX_ATTEMPTS - attempts);
        }
    }
    printf("Maximum attempts exceeded. Access denied.\n");
    return false;
}

void displayMenu() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Balance Inquiry\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Displaying balance\n");
                break;
            case 2:
                printf("Depositing funds\n");
                break;
            case 3:
                printf("Withdrawing funds\n");
                break;
            case 4:
                printf("Exiting\n");
                break;
            default:
                printf("Invalid choice. Please try again\n");
        }
    } while (choice != 4);
}

int main() {
    if (login()) {
        displayMenu();
    }
    return 0;
}
*/
