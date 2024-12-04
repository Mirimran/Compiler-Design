#include <stdio.h>

int main() {
    int spaces = 0, tabs = 0, newlines = 0;
    char ch;

    printf("Enter a paragraph (press Ctrl+D to end input on Linux/Mac or Ctrl+Z on Windows):\n");

    while ((ch = getchar()) != EOF) {
        if (ch == ' ') {
            spaces++;
        } else if (ch == '\t') {
            tabs++;
        } else if (ch == '\n') {
            newlines++;
        }
    }

    printf("Number of spaces: %d\n", spaces);
    printf("Number of tabs: %d\n", tabs);
    printf("Number of newlines: %d\n", newlines);

    return 0;
}
