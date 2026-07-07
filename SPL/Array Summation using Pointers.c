#include <stdio.h>

int main() {
    int arr[5];
    int sum = 0;
    int *ptr = arr; // Array name decays to pointer to the first element

    // Reading 5 integers from the user
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }

    // Calculating sum using the pointer
    for (int i = 0; i < 5; i++) {
        sum += *(ptr + i);
    }

    printf("Sum: %d\n", sum);

    return 0;
}
