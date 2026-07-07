#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows for top half (e.g., 5): ");
    if (scanf("%d", &n) != 1) return 1;

    // Top half (Inverted Pyramid)
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half (Regular Pyramid, starting from row 2 to avoid duplicate center)
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
