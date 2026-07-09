#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pattern

    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars
        for (int k = 1; k <= 5; k++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
