#include <stdio.h>

int main() {
    int n, row, col;
    printf("Enter the Number: ");
    scanf("%d", &n);

    for (row=1 ; row<=n; row++) {
        for (int col=1; col<=n; col++) {
                if (row==1 || row == n || col==1 || col==n ) {
                    printf("*");
                }
                else {
            printf (" ");
        }
        }
        printf("\n");
    }
    return 0;
}
