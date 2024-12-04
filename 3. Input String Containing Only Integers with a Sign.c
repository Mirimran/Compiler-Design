#include <stdio.h>
#include <ctype.h>

// Function to check if a string contains only signed integers
int isSignedInteger(char *str) {
    if (str[0] != '+' && str[0] != '-' && !isdigit(str[0])) {
        return 0; // First character must be a digit or a sign
    }
    for (int i = 1; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            return 0; // Remaining characters must be digits
        }
    }
    return 1;
}

int main() {
    char input[100];
    printf("Enter a string containing only signed integers: ");
    scanf("%s", input);

    if (isSignedInteger(input)) {
        printf("%s is a valid signed integer.\n", input);
    } else {
        printf("%s is not a valid signed integer.\n", input);
    }

    return 0;
}
