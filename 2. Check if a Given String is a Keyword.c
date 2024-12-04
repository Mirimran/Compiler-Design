#include <stdio.h>
#include <string.h>

// List of C keywords
const char *keywords[] = {
    "auto", "break", "case", "char", "const", "continue", "default",
    "do", "double", "else", "enum", "extern", "float", "for", "goto",
    "if", "int", "long", "register", "return", "short", "signed", "sizeof",
    "static", "struct", "switch", "typedef", "union", "unsigned", "void",
    "volatile", "while"
};
const int numKeywords = sizeof(keywords) / sizeof(keywords[0]);

// Function to check if a string is a keyword
int isKeyword(char *str) {
    for (int i = 0; i < numKeywords; i++) {
        if (strcmp(str, keywords[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char input[100];
    printf("Enter a string to check if it is a keyword: ");
    scanf("%s", input);

    if (isKeyword(input)) {
        printf("%s is a keyword.\n", input);
    } else {
        printf("%s is not a keyword.\n", input);
    }

    return 0;
}
