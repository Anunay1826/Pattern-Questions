#include <stdio.h>

int main() {
    int n, i, j, stars, spaces;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    spaces = 2 * n - 2; // Initial spaces

    // Single loop for both halves (top and bottom)
    for(i = 1; i <= 2 * n - 1; i++) {
        if(i <= n)
            stars = i;
        else
            stars = 2 * n - i;

        // Left stars
        for(j = 1; j <= stars; j++)
            printf("* ");

        // Spaces in the middle
        for(j = 1; j <= spaces; j++)
            printf("  ");

        // Right stars
        for(j = 1; j <= stars; j++)
            printf("* ");

        printf("\n");

        // Adjust spaces count for next line
        if(i < n)
            spaces -= 2;
        else
            spaces += 2;
    }

    return 0;
}
