#include <stdio.h>
#include <stdlib.h>

int main () {

 int num, count=0, digit;
 printf ("Enter a Number: ");
 scanf ("%d", &num);
 printf ("Last Digit=%d\n", num%10);

 while (num!=0) {
        count++;
        digit=num%10;
        num=num/10;
 }
 printf ("First Digit=%d\n", digit);
 printf ("Digit Count=%d", count);

return 0;
}
