#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    // Input
    printf("Enter a string (your name): ");
    fgets(str, sizeof(str), stdin);

    // Output the entered string
    printf("You entered: %s", str);

    // Calculate string length manually
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Note: fgets() includes the newline character in the length
    // You can subtract it if needed:
    if (str[length - 1] == '\n') {
        length--; // remove newline from count
    }

    // Display length
    printf("Length of the string: %d\n", length);

    return 0;
}