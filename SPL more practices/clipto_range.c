#include <stdio.h>
#include <stdlib.h>

/*Range of integers
Clipto Number
1. Sum of the first and Last digit < 8 and
2. Sum of digits is divisible by 6
*/
    int main()
{
    int upperDigit, lowerDigit;

    printf ("Enter the Lower Digit: ");
    scanf ("%d", &lowerDigit);
    printf ("Enter the Upper Digit: ");
    scanf ("%d", &upperDigit);

    printf("Clipto numbers between range %d and %d are: ",lowerDigit,upperDigit);

    for(int num=lowerDigit; num<=upperDigit; num++){
    int firstDigit, sum=0, digit;
    int n=num;
    int lastDigit=n%10;

    while(n!=0) {

        digit=n%10;
        sum+=digit;
        n=n/10;
    }
    firstDigit=digit;

    if((firstDigit+lastDigit)<8 && sum%6==0){
        printf("%d\n",num);
    }
    }
    return 0;
}
