#include <stdio.h>
#include <stdbool.h>

bool login() {
    const int MAX_ATTEMPTS = 3;
    const int STORED_PIN = 4444;
    int entered_pin;
    int attempts = 0;

    while (attempts < MAX_ATTEMPTS) {
        printf("Enter your PIN:\n");
        scanf("%d", &entered_pin);

        if (entered_pin == STORED_PIN) {
            printf("True.\n");
            return true;
        } else {
            attempts++;
            printf("Incorrect PIN. You have %d attempts left\n", MAX_ATTEMPTS - attempts);
        }
    }

    printf("False. Maximum attempts exceeded\n");
    return false;

}

int main() {
    login();
    return 0;
}
