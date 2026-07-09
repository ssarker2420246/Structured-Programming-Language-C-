#include <stdio.h>
#include <stdlib.h>

int main () {

int num, digit, reverse=0;
printf ("Enter a Number: ");
scanf ("%d", &num);
int original=num;
while (num!=0) {
    digit=num%10;
    reverse=reverse*10+digit;
    num=num/10;
}
if (original==reverse) {
    printf ("%d is a Palindrome Number.", reverse);
}
else {
    printf ("%d is not a Palindrome Number.", reverse);
}

return 0;
}
