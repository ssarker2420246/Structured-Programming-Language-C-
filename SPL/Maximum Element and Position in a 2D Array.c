#include <stdio.h>

int main() {
    int arr[3][3];
    int max_val;
    int max_row = 0, max_col = 0;

    // Read a 3x3 array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Pointer pointing to the start of the 2D array
    int *ptr = &arr[0][0];
    max_val = *ptr;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // Access element linearly using pointer math: (i * total_columns) + j
            int current_val = *(ptr + (i * 3) + j);
            if (current_val > max_val) {
                max_val = current_val;
                max_row = i;
                max_col = j;
            }
        }
    }

    printf("Maximum Value: %d, Position: (%d, %d)\n", max_val, max_row, max_col);

    return 0;
}
