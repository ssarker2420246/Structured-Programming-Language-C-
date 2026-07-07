#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of 'N' (minimum 4): ");
    if (scanf("%d", &size) != 1) return 1;

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            // Condition for first column, last column, and diagonal
            if (j == 1 || j == size || i == j) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
