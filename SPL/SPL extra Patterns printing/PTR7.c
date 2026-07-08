#include<stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=n;i>=1;i-=2)
    {
        for(int j=1;j<=i;j++)
            printf("*");

        printf("\n");
    }

    return 0;
}


/*


OUTPUT:

*****
***
*

*/
