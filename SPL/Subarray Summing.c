#include <stdio.h>

// Function accepts the memory address where the subarray tracking begins
int sumSubarray(int *startPtr, int count) {
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += *(startPtr + i);
    }
    return sum;
}

int main() {
    int arr[7];

    for (int i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
    }

    // Pass the pointer pointing to index 2.
    // From index 2 to index 5 inclusive contains exactly 4 elements (indices: 2, 3, 4, 5).
    int sum = sumSubarray(&arr[2], 4);

    printf("Sum of subarray: %d\n", sum);

    return 0;
}
