#include <stdio.h>
#include <stdlib.h>
// 1 X 2 + 3 X 4 + 5 X 6 +....n=4, sum=14, n=3, sum=5
int main()
{
    int num, summation, total=0;
    printf ("Enter a Number: ");
    scanf("%d",&num);
    for(int i=1; i<=num; i++) {
            //for printing the series
            printf("%d ",i);
      if(i!=num) {
        if(i%2!=0){
            printf("X ");
        }
        else
            {
            printf("+ ");
        }

      }
      //for finding the sum of the series
        if(i%2!=0) {
            summation= i; //1,3
        }
        else
            {
            summation=summation*i;//1*2=2, 3*4=12
            total+=summation;//0+2=2, sum=2+12=14
        }

    }
    if (num%2==0) {
        printf ("= %d",total);
    }else{
        printf ("= %d",total+summation);
    }

    return 0;
}
