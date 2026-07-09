#include <stdio.h>
#include <stdlib.h>

int main () {

int num, digit, sum=0, firstDigit;
printf ("Enter a Number: ");
scanf ("%d", &num);
int original=num;
int lastDigit=num%10;
while (num!=0) {
    digit=num%10;
    sum+=digit;
    num=num/10;
}
firstDigit=digit;
if (firstDigit+lastDigit<8 && sum%6==0) {
    printf ("%d is a Clipto Number.", original);
}
else {
    printf ("%d is not a Clipto Number.", original);
}

return 0;
}
