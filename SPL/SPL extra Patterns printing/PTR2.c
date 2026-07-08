#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        if(i==(n+1)/2)
        {
            for(int j=1; j<=n; j++)
                printf("*");
        }
        else
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

/*
OUTPUT:

*
*
*****
*
*

*/
