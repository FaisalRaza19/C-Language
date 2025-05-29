#include <stdio.h>

int main() {
    char ch;

    // Input character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if uppercase or lowercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("The character is uppercase.\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("The character is lowercase.\n");
    }
    else {
        printf("The character is not a letter.\n");
    }

    return 0;
}
