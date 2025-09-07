#include <stdio.h>

int main() 
{
    int i, j, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) 
    {
        // Print spaces
        for(j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
