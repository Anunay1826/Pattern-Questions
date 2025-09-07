#include <stdio.h>

int main() {
    int i, j, n, space;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    space = 2 * (n - 1); // initial spaces between triangles

    for(i = 1; i <= n; i++) {
        // Left side: numbers increasing
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Space in the middle
        for(j = 1; j <= space; j++) {
            printf(" ");
        }
        // Right side: numbers decreasing
        for(j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");        // end row
        space -= 2;          // decrease the space for next row
    }

    return 0;
}
