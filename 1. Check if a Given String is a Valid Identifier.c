#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to check if a string is a valid identifier
int isValidIdentifier(char *str) {
    if (!isalpha(str[0]) && str[0] != '_') {
        return 0; // First character must be a letter or underscore
    }
    for (int i = 1; str[i] != '\0'; i++) {
        if (!isalnum(str[i]) && str[i] != '_') {
            return 0; // Remaining characters must be alphanumeric or underscore
        }
    }
    return 1;
}

int main() {
    char input[100];
    printf("Enter a string to check if it is a valid identifier: ");
    scanf("%s", input);

    if (isValidIdentifier(input)) {
        printf("%s is a valid identifier.\n", input);
    } else {
        printf("%s is not a valid identifier.\n", input);
    }

    return 0;
}
