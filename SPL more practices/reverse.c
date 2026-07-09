int main () {

#include <stdio.h>
#include <stdlib.h>

int main () {

int num;

printf ("Enter a Number: ");
scanf ("%d", &num);

while (num!=0) {
    printf ("%d", num%10);
    num=num/10;
}

return 0;
}
