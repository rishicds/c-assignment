#include <stdio.h>
#include <ctype.h> // For toupper function

int main() {
    char fullName[100];
    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Initials: ");

    // Display the first character of the full name as the first initial
    if (fullName[0] != '\0' && fullName[0] != '\n') {
        printf("%c", toupper(fullName[0]));
    }

    // Loop through the characters of the full name
    for (int i = 1; fullName[i] != '\0'; i++) {
        // If a space is found, the next character is considered as the initial
        if (fullName[i] == ' ') {
            // Check if the next character exists and is not a newline character
            if (fullName[i + 1] != '\0' && fullName[i + 1] != '\n') {
                printf("%c", toupper(fullName[i + 1]));
            }
        }
    }
    printf("\n");

    return 0;
}
