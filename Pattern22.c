#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int size = 2 * n - 1;

    for(i = 1; i <= size; i++) {
        for(j = 1; j <= size; j++) {
            int min_dist = i < j ? i : j;
            min_dist = min_dist < size - i + 1 ? min_dist : size - i + 1;
            min_dist = min_dist < size - j + 1 ? min_dist : size - j + 1;
            printf("%d ", n - min_dist + 1);
        }
        printf("\n");
    }

    return 0;
}
