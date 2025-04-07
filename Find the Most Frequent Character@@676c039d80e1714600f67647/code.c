#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    int freq[256] = {0};
    char maxChar = '\0';
    int maxFreq = 0;

    scanf("%[^\n]", str);
    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ') { 
            freq[(unsigned char)str[i]]++;
        }
    }
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }

    printf("%c\n", maxChar);
    return 0;
}