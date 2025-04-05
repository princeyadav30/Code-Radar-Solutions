#include <stdio.h>
#include <string.h>

char *caesarCipher(char str[], int n, char encrypted[]) {
    int i;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            encrypted[i] = ((str[i] - 'A' + n) % 26 + 26) % 26 + 'A';
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            encrypted[i] = ((str[i] - 'a' + n) % 26 + 26) % 26 + 'a';
        } else {
            encrypted[i] = str[i];
        }
    }
    encrypted[i] = '\0';
    return encrypted;
}

int main() {
    char str[] = "Hello, World!";
    int shift = 3;
    char encrypted[100];
    printf("Original: %s\n", str);
    printf("Encrypted: %s\n", caesarCipher(str, shift, encrypted));
    return 0;
}
