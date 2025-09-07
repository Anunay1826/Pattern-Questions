#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Upper wings
    for(i = 1; i <= n; i++) {
        // Left stars
        for(j = 1; j <= i; j++)
            printf("* ");
        // Spaces in the middle
        for(j = 1; j <= 2*(n - i); j++)
            printf("  ");
        // Right stars
        for(j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    // Lower wings
    for(i = n; i >= 1; i--) {
        // Left stars
        for(j = 1; j <= i; j++)
            printf("* ");
        // Spaces in the middle
        for(j = 1; j <= 2*(n - i); j++)
            printf("  ");
        // Right stars
        for(j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}
