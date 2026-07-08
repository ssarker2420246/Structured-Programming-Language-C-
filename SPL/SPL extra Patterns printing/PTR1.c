#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int num = 1;

    for(int i = 1; i <= n; i++)
    {
        for(int s = 1; s <= n-i; s++)
            printf("  ");

        for(int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;

            if(num > n)
                num = 1;
        }

        printf("\n");
    }

    return 0;
}

/*
OUTPUT:

        1
      2 3
    4 5 1
  2 3 4 5
1 2 3 4 5


*/
