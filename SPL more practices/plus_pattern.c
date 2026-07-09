#include <stdio.h>

int main() {
    int n, row, c;
    printf("Enter the ODD number: ");
    scanf("%d", &n);
    int mid = n / 2;

    for (int row= 0; row < n; row++)
     {
        if (row== mid)
        {
            for (int col= 0; col < n; col++)
            {
                printf("* ");
            }
        }
        else
        {
            for (int col = 0; col < mid; col++)
            {
                printf("  ");
            }
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
