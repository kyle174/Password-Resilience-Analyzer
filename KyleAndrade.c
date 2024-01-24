#include <stdio.h>
#include <string.h>
#include <ctype.h>

int hasLowercase(char x[]) {
    int i;
    for (i=0; x[i]!='\0'; i++) {
        if (islower(x[i])) {
            return 1;
        }
    }
    return 0;
}

int hasUppercase(char x[]) {
    int i;
    for (i=0; x[i]!='\0'; i++) {
        if (isupper(x[i])) {
            return 1;
        }
    }
    return 0;
}

int hasDigit(char x[]) {
    int i;
    for (i=0; x[i]!='\0'; i++) {
        if (isdigit(x[i])) {
            return 1;
        }
    }
    return 0;
}

int hasSpecialChar(char x[]) {
    int i;
    for (i=0; x[i]!='\0'; i++) {
        if (!isalpha(x[i]) && !isdigit(x[i])) {
            return 1;
        }
    }
    return 0;
}

int evaluateStrength(char password[]) {
    int strength = 0;
    strength += hasLowercase(password);
    strength += hasUppercase(password);
    strength += hasDigit(password);
    strength += hasSpecialChar(password);
    if (strlen(password) >= 12) {
        strength += 1;
    }
    return strength;
}

void main() {
    int done = 0;
    char password[100];
    char strength[100];
    char choice[100];
    while(done == 0) {
        // Main menu
        printf("\nPassword Resilience Analyzer\n");
        printf("1. Test a new password\n");
        printf("2. View strength of the last tested password\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%s",choice);
        // Test new password
        if (!strcmp(choice, "1")) {
            int valid = 0;
            // Loop until valid password entered
            while (valid == 0) {
                printf("Enter the password: ");
                scanf("%s",password);
                if (strlen(password) >= 8) {
                    valid = 1;
                    int score = evaluateStrength(password);
                    // Calculate strength of password
                    if (score <= 2) {
                        strcpy(strength,"Weak");
                    }
                    else if (score <= 4) {
                        strcpy(strength,"Moderate");
                    }
                    else {
                        strcpy(strength,"Strong");
                    }
                    printf("Password Strength: %s\n",strength);
                }
                // Invalid password
                else{
                    printf("Error: Password should be at least 8 characters long. Try again.\n");
                }
            }
        }
        // View strength of last password
        else if (!strcmp(choice, "2")) {
            // Check if a password has been entered
            printf("%c",password[0]);
            if (password[0] == '\0') {
                printf("Error: No previous password entered.\n");
            }
            else {
                printf("Last tested password strength: %s\n",strength);
            }
        }
        // Exit
        else if (!strcmp(choice, "3")) {
            done = 1;
            printf("Exiting...\n");
        }
        // Invalid input
        else {
            printf("Error: Invalid option. Try again.\n");
        }
    }
}
