#include <stdio.h>

int main() {
    int n, arr[100], i, j, missing = 1;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 1; ; i++) { 
        int found = 0;
        for (j = 0; j < n; j++) {
            if (arr[j] == i) {
                found = 1;
                break;
            }
        }
        if (!found) {
            missing = i;
            break;
        }
    }

    printf("%d\n", missing);
    return 0;
}