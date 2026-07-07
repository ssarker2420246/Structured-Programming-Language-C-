#include <stdio.h>

int main() {
    int height;
    printf("Enter the height of the triangle: ");
    if (scanf("%d", &height) != 1) return 1;

    for (int i = 1; i <= height; i++) {
        // Print leading spaces for alignment
        for (int j = 1; j <= height - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
