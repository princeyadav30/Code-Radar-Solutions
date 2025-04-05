#include <stdio.h>

int main() {
    int n, i, j;

    // Ask the user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop through rows
    for(i = 1; i <= n; i++) {
        // Loop through columns to print stars
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
