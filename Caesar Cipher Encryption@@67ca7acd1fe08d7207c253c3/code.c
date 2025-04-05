#include<stdio.h>
#include<string.h>

char *caesarCipher(char str[], int n, char encrypted[]) {
    int i;

    // Loop through each character in the input string
    for(i = 0; i < strlen(str); i++) {
        // Handle uppercase letters
        if(str[i] >= 'A' && str[i] <= 'Z') {
            encrypted[i] = ((str[i] - 'A' + n) % 26 + 26) % 26 + 'A'; // Wrap around the alphabet
        }
        // Handle lowercase letters
        else if(str[i] >= 'a' && str[i] <= 'z') {
            encrypted[i] = ((str[i] - 'a' + n) % 26 + 26) % 26 + 'a'; // Wrap around the alphabet
        } else {
            // Non-alphabetical characters remain the same
            encrypted[i] = str[i];
        }
    }

    // Null-terminate the encrypted string
    encrypted[i] = '\0';
    return encrypted;
}

int main() {
    char str[] = "Hello, World!";
    int shift = 3;
    char encrypted[100]; // Make sure this array is large enough to hold the encrypted text

    printf("Original: %s\n", str);
    caesarCipher(str, shift, encrypted);
    printf("Encrypted: %s\n", encrypted);

    return 0;
}
