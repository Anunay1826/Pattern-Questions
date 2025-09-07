#include <stdio.h>

int main() {
    int n, i, j, space;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        // Print leading spaces
        for(space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print increasing part
        for(j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }
        // Print decreasing part (excluding middle)
        for(j = i - 1; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }
        printf("\n");
    }

    return 0;
}
