#include <stdio.h>
#include <stdbool.h>

// Helper logic to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int arr[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;
    printf("Prime Numbers: ");
    for (int i = 0; i < 10; i++) {
        if (isPrime(*(ptr + i))) {
            printf("%d ", *(ptr + i));
        }
    }
    printf("\n");

    return 0;
}
