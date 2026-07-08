#include<stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int s=1;s<=n-i;s++)
            printf("  ");

        for(int j=i;j>=1;j--)
            printf("%d ",j);

        for(int j=2;j<=i;j++)
            printf("%d ",j);

        printf("\n");
    }

    return 0;
}

/*
OUTPUT:

        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4

*/
