#include<stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int s=1;s<i;s++)
            printf(" ");

        printf("*");

        if(i!=n/2+1)
        {
            for(int s=1;s<=n-i*2+1;s++)
                printf(" ");

            printf("*");
        }

        printf("\n");
    }

    return 0;
}


/*
OUTPUT:

*    *
 *  *
  *
   **
    **


*/
