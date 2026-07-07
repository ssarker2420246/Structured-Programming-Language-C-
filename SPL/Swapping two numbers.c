#include <stdio.h>

// Function to swap values using pointers
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    if (scanf("%d %d", &a, &b) != 2) return 1;

    swap(&a, &b); // Call swap passing addresses

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
