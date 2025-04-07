#include <stdio.h>

void replaceElements(int arr[], int n) {
    int max = -1; // Initialize the maximum to -1 (for the last element)
    
    for (int i = n - 1; i >= 0; i--) {
        int current = arr[i]; // Store current element before replacing
        arr[i] = max;         // Replace with the maximum on the right
        if (current > max) {
            max = current;    // Update maximum if current element is larger
        }
    }
}

int main() {
    int n;
    scanf("%d", &n); // Input size of array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Input array elements
    }

    replaceElements(arr, n);

    // Output the modified array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}