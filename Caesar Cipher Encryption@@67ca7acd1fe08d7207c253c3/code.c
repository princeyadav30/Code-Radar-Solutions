#include <ctype.h>

void caesarCipher(char message[], int shift, char encrypted[]) {
    int i = 0;
    while (message[i] != '\0') {
        if (isalpha(message[i])) {
            char base = isupper(message[i]) ? 'A' : 'a';
            encrypted[i] = (message[i] - base + shift) % 26 + base;
        } else {
            encrypted[i] = message[i];
        }
        i++;
    }
    encrypted[i] = '\0';
}