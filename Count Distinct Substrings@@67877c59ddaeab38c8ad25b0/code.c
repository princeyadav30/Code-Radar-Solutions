#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substr[1000][100];
    int total = 0, len, unique;

    scanf("%s", str);
    len = strlen(str);
    int count = 0;
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            char temp[100] = "";
            strncpy(temp, str + i, j - i + 1);
            temp[j - i + 1] = '\0';
            unique = 1;
            for (int k = 0; k < count; k++) {
                if (strcmp(substr[k], temp) == 0) {
                    unique = 0;
                    break;
                }
            }
            if (unique) {
                strcpy(substr[count], temp);
                count++;
            }
        }
    }
    printf("%d\n", count);

    return 0;
}