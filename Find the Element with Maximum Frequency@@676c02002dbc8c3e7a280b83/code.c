#include <stdio.h>

int main() {
    int n, i, j, maxFreq = 0, result;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) count++;
        }
        if (count > maxFreq || (count == maxFreq && arr[i] < result)) {
            maxFreq = count;
            result = arr[i];
        }
    }

    printf("%d\n", result);
    return 0;
}