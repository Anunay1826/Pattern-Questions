#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Top pattern
    for(i = 0; i < n; i++) {
        // Left stars
        for(j = 1; j <= n - i; j++)
            printf("*");
        // Spaces (calculated via 2*i)
        for(j = 1; j <= 2 * i; j++)
            printf(" ");
        // Right stars
        for(j = 1; j <= n - i; j++)
            printf("*");
        printf("\n");
    }

    // Bottom inverted pattern
    for(i = n - 1; i >= 0; i--) {
        // Left stars
        for(j = 1; j <= n - i; j++)
            printf("*");
        // Spaces (calculated via 2*i)
        for(j = 1; j <= 2 * i; j++)
            printf(" ");
        // Right stars
        for(j = 1; j <= n - i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
