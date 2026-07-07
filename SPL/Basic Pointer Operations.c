#include <stdio.h>

int main() {
    int num = 5;
    int *ptr = &num; // Declare pointer and assign address of num

    *ptr += 10; // Increment value of num by 10 using pointer

    // Print values
    printf("Using variable: %d, Using pointer: %d\n", num, *ptr);

    return 0;
}
