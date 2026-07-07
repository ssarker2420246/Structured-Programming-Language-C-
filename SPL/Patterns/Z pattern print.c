#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of 'Z' (minimum 4): ");
    if (scanf("%d", &size) != 1) return 1;

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            // Condition for top row, bottom row, and anti-diagonal
            if (i == 1 || i == size || (i + j == size + 1)) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
