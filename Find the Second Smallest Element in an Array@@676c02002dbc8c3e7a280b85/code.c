#include <stdio.h>
#include <limits.h> // For INT_MAX

int findSecondSmallest(int arr[], int n) {
    if (n < 2) return -1; // If array has less than 2 elements, no second smallest exists

    int first = INT_MAX, second = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < first) {
            second = first;  // Update second smallest
            first = arr[i];  // Update smallest
        } else if (arr[i] < second && arr[i] != first) {
            second = arr[i]; // Update second smallest
        }
    }

    return (second == INT_MAX) ? -1 : second;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSecondSmallest(arr, n));

    return 0;
}